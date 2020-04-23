// Program Information //////////////////////////////////////////////
/**
  * @file BinaryController.cpp
  *
  * @team GenTest ( Team 22 )
  *
  * @brief Management of Binary Values for direct fuzz runs and loop scenarios.
  *
  * @details This class is responsible for calling DeepState in order to accomplish
  *	     the following use cases:
  *		- Symbolic Loops
  *		- Direct fuzzing through GenTest
  *
  * @version 1.00
  *          Joshua Johnson - 4/15/2020
  *          Created skeleton for class layout
  *	     Joshua Johnson - 4/16/2020
  *	     Completed BinaryController after GenTest integration w/
  *	     DeepState. 
  *
  * COPYRIGHT INFORMATION
  *-----------------------------------------------------------------
  * Copyright (c) 2020 Trail of Bits, Inc.
  *
  * Licensed under the Apache License, Version 2.0 (the "License");
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  *
  *     http://www.apache.org/licenses/LICENSE-2.0
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations unde
**/


/*******************
* Headers 
********************/
#include "BinaryController.h"

/******************************
* Binary Controller Functions
*******************************/

BinaryController::BinaryController(){ this->pos = 0; }


ResultPacket BinaryController::fuzz_one_test( DeepState_TestInfo * test )
{
    // Declare basic variables.
    ResultPacket result;

    // Reset Input Indicies.
    DeepState_InputIndex = 0;  
    DeepState_SwarmConfigsIndex = 0;

    for (int i = 0; i < DeepState_InputSize; i++) 
    {
        DeepState_Input[i] = (char)rand();
    }

    // Begin test
    DeepState_Begin( test );

    result.set_test_result( (DeepState_TestRunResult) DeepState_RunTestNoFork( test ) );
    result.set_read_bytes( DeepState_InputIndex );

    return result;
}

ResultPacket BinaryController::fuzz_until_fail( DeepState_TestInfo * test )
{
    // Declare basic variables.
    unsigned loop_limit_counter = 0;
    ResultPacket result;

    // Until the return code reports failure, keep fuzzing.
    while( (result = fuzz_one_test( test )).get_result() != DeepState_TestRunFail
           && loop_limit_counter <= this->FUZZ_MAX ){ loop_limit_counter++; }

    return result;
}

ResultPacket BinaryController::fuzz_file( ControllerCommand command, int testIndex )
{
    // Declare basic variables.
    DeepState_TestInfo * test = DeepState_FirstTest();
    ResultPacket errorResult, comResult;
    static unsigned inc = 0;
    unsigned seed = time( NULL ) + inc;

    // Fetch appropriate test case.
    for( int index = 0; index < testIndex; index++ )
    {
        test = test->prev;
    }

    // Determine what operation to perform.
    switch( command )
    {
        case FUZZ_ONCE:
	    
	        // Increment counter
	        inc++;            

            return fuzz_one_test( test );

        break;

        case FUZZ_UNTIL_FAIL:
          
            return fuzz_until_fail( test );

        break;

	    case START_CONTROLLER:

            // Set seed for dumb-fuzzing
            srand( seed );

        break;

        case RESET:

            this->pos = 0;

        break;

        default:

            std::cout << "ERROR: unknown binary controller command." << std::endl; 

            return errorResult;

    }

    return errorResult;

}

unsigned int BinaryController::getPos()
{
    return this->pos;
}

void BinaryController::setPos( unsigned int pos )
{
    this->pos = pos;
}


short BinaryController::getShort()
{
    // Set DeepState_Index
    DeepState_InputIndex = this->pos;

    // Increment pos
    pos += 2;

    return DeepState_Short();
}

uint16_t BinaryController::getUShort()
{
    // Set DeepState_Index
    DeepState_InputIndex = this->pos;

    // Increment pos
    pos += 2;

    return DeepState_UShort();   
}

int32_t BinaryController::getInt()
{
    // Set DeepState_Index
    DeepState_InputIndex = this->pos;

    // Increment pos
    pos += 4;

    return DeepState_Int();
}

int64_t BinaryController::getInt64()
{
    // Set DeepState_Index
    DeepState_InputIndex = this->pos;

    // Increment pos
    pos += 8;

    return DeepState_Int();
}

uint32_t BinaryController::getUInt()
{
    return DeepState_UInt();
}

uint64_t BinaryController::getUInt64()
{
    // Set DeepState_Index
    DeepState_InputIndex = this->pos;

    // Increment pos
    pos += 8;

    return DeepState_UInt64();
}

double BinaryController::getDouble()
{
    // Set DeepState_Index
    DeepState_InputIndex = this->pos;

    // Increment pos
    pos += 8;

    return DeepState_Double();
}

float BinaryController::getFloat()
{
    // Set DeepState_Index
    DeepState_InputIndex = this->pos;

    // Increment pos
    pos += 4;

    return DeepState_Float();
}

int32_t BinaryController::getLong()
{
    // Set DeepState_Index
    DeepState_InputIndex = this->pos;

    // Increment pos
    pos += 4;

    return DeepState_Int();
}

int8_t BinaryController::getChar()
{
    // Set DeepState_Index
    DeepState_InputIndex = this->pos;

    // Increment pos
    pos += 1;

    return DeepState_Char();
}

uint8_t BinaryController::getUChar()
{
    // Set DeepState_Index
    DeepState_InputIndex = this->pos;

    // Increment pos
    pos += 1;

    return DeepState_UChar();
}

bool BinaryController::getBool()
{
// Set DeepState_Index
    DeepState_InputIndex = this->pos;

    // Increment pos
    pos += 1;

    return DeepState_Bool();
}



/******************************
* Result Packet Functions
*******************************/

ResultPacket::ResultPacket()
{
    this->bytes_read = 0;
    this->test_result = (DeepState_TestRunResult) 0;
}

void ResultPacket::set_read_bytes( uint32_t bytes_read )
{
    this->bytes_read = bytes_read;
}

void ResultPacket::set_test_result( DeepState_TestRunResult result )
{
    this->test_result = result;
}

uint32_t ResultPacket::get_bytes()
{
    return this->bytes_read;
}

DeepState_TestRunResult ResultPacket::get_result()
{
    return this->test_result;
}

void ResultPacket::add_to_bytes( uint32_t read_bytes )
{
    this->bytes_read += read_bytes;
}

