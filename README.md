# Gentest Repository

<img src="https://www.cefns.nau.edu/capstone/projects/CS/2020/GenTest-S20/images/Team_Logo_Large.png" width="100"/>
Repository for GenTest, a Northern Arizona University capstone team.

## Northern Arizona University Capstone
This project is being developed by team GenTest. The Team members and roles are as follows:
* Team Lead/Editor - Joshua Johnson
* Recorder - Silu Shen
* Architect - Tristan Miller
* Coder - Zane Fink

All team members are also "coders" and are expected to develop GenTest


## Purpose:
The GenTest solution is a light-weight translator program built on ANTLR v4.8 [ANTLR](https://www.antlr.org/). It is designed to take in DeepState [DeepState](https://github.com/trailofbits/deepstate) unit testing file, called the file-to-translate, and translate its syntax to the syntax of an external C or C++ unit testing framework. Currently, only Google Test is supported. If you would like to assist in creating more translation capability for other C or C++ libraries or would like to change the translations in Google Test for your own use, please refer to the Confgiuration File Tutorial
 
## Build Instructions
As of release, this software is integrated with the [DeepState](https://github.com/trailofbits/deepstate) framework. Thus, if you clone this repository directly and try to build the executable, it will fail because it has no reference to the libdeepstate.a static library. **This repository serves to document progress and information about the product. You must use the installer script to actually use the software with DeepState after cloning!**

### Cloning this Repository into an existing DeepState installation
1.`Navigate to your /deepstate directory`

2.`git clone https://github.com/Irohsan/Team22`

3.`mv Team22 GenTest`

4.`cd GenTest/install && bash gentest_installer.sh`

### Cloning this Repository into a new installation of DeepState
1.`git clone https://github.com/trailofbits/deepstate.git`

2.`cd deepstate`

3.`git clone https://github.com/Irohsan/Team22`

4.`mv Team22 GenTest`

5.`cd GenTest/install && bash gentest_installer.sh`

### Cloning the DeepState Framework with GenTest
1. `git clone https://github.com/ZwFink/deepstate/`
2. `mkdir deepstate/build && cd deepstate/build`
3. `cmake ../`
4. `make`
5. `make install`

### After Build
After you have succesfully built the GenTest software, navigate to the `/deepstate/build/examples` directory to get started. This is where you can run the software on unit testing executables using the flags below. 

## Usage
There are two routes to using the GenTest solution. The first route is via binary files produced from the DeepState library. The second route is using the --fuzz flag to call the DeepState library directly from the GenTest solution. Please refer to the sections below to see the relevant tutorial for your needs.

### Running GenTest using a Binary File

`./DeepState_TestExecutable --output_standalone_test OutputTestName.cpp 
                            --input_source_file DeepState_Test.cpp 
                            --input_test_file test.fail 
                            --input_translation_config gtestTranslation.cfg`
                            
The above line is a template example of how to run the system after following the build instructions. The DeepState_TestExecutable refers to the built DeepState unit test, and the DeepState_Test.cpp refers to the original source file containing the C++ or C code for the unit test. For more detailed information on each of the flags in this line, please use the --help flag.

### Running GenTest using Direct Fuzzing

`./DeepState_TestExecutable --output_standalone_test OutputTestName.cpp
                            --input_source_file DeepState_Test.cpp
                            --input_translation_config gtestTranlsation.cfg
                            --fuzz
                            --exit_on_fail`
 
To use direct fuzzing through the GenTest solution, you can specify the `--fuzz` flag in addition to an optional `--exit_on_fail` flag. The `--fuzz` flag tells the solution to simple-fuzz values for the test cases in the unit test. The `--exit_on_fail` flag is an optional flag specifior which indicates to the software that you want to fuzz each test case until failing values are produced, at which point the solution will econde these failing values into the output file. 

**Please note** that the current GenTest solution only uses a simple-fuzzing approach and cannot use the more advanced fuzzing capabilities of DeepState.

### Where to Find Configuration Files
`GenTest/Config Files`

### All Flags and their Use
#### Required Flags
`--output_standalone_test` - Used to specify the name of the outfile produced by the transaltion.

`--input_source_file` - Used to specify the location of the Unit Test source code file to translate.

`--input_translation_config` - Used to specify the export unit test framework.
#### One of Required
`--input_test_file` - The test file which contains binary data for the test case from DeepState (i.e. IntegerOverflow.fail).

`--input_test_dir` - The directory containing binary data files for the test cases from Deepstate.

`--fuzz` - Fuzz unique values for all test cases.

`--exit_on_fail` - Fuzz unique failing values for all test cases.

`--output_num` - The number of standalone tests to output. MUST be used in conjunction with `--fuzz`

## Configuration File Tutorial
For this tutorial, please reference the existing configuration file found [here](test/test_data/gtestTranslation.cfg).

Configuration files have six specifiors than can be used to edit the output translation of the software:
- **INCLUDE** - The specifior for adding in any needed include statements to the outfile as required by the library.
- **ASSERT** - The specifior for dictating translations from DeepState's `ASSERT` clauses.
- **ASSUME** - The specifor for dictating translations from DeepState's `ASSUME` clauses.
- **CHECK** - The specifior for dictating translations from DeepState's `CHECK` clauses.
- **NO_INLINE** - The specifior for dictating translations from DeepState's `DEEPSTATE_NOINLINE` function keyword.
- **MAIN_FUNC** - The specifior for adding main functions to standalone files required by the output testing framework for execution.

Of these six specifiors, four have sub-specifiors which correspond to the `GT`, `LT`, `GE`, `LE`, `NE`, and `EQ` versions of the three major categories of testing syntax (i.e. `ASSERT` `ASSUME` `CHECK`).

### Editing a Configuration File
To edit a configuration file, change the string on the right-hand side of the `=` sign with no spaces between the `=` and the translation string. For instance, I could change the following translation for `ASSERT_GT` using the following method:

`Original: ASSERT_GT=REQUIRE`
`Changed: ASSERT_GT=ASSERT_GT`

No parethesis are required in the translation statement--these will be produced for you by GenTest. When editing files to individually change sub-specifiors, please keep in mind that the base `ASSERT=`, `ASSUME=`, and `CHECK=` translations must be kept.

**Additionally**, there can be no additional lines between configuration inputs.

## Information about For Loop Support
At the present, the GenTest solution cannot support while or do while loops. It can, however, support for loops and nested for loops. Please note that in a nested for loop, if the symbolic declarations are of different type, any symbolic declarations after the loop will be populated but might not match DeepState exactly due to limitations.

## Information on Type Support 
| Type               | Binary Files | Fuzzing | DeepState_Type() |
|--------------------|--------------|---------|------------------|
| int/int32_t        | Yes          | Yes     | Yes              |
| int8_t             | Yes          | Yes     | No               |
| int16_t            | Yes          | Yes     | No               |
| int64_t            | Yes          | Yes     | Yes              |
| uint8_t            | Yes          | Yes     | No               |
| uint16_t           | Yes          | Yes     | No               |
| unsigned/uint32_t  | Yes          | Yes     | Yes              |
| uint64_t           | Yes          | Yes     | Yes              |
| short              | Yes          | Yes     | Yes              |
| long               | Yes          | Yes     | Yes              |
| double             | Yes          | Yes     | Yes              |
| float              | Yes          | Yes     | Yes              |
| char               | Yes          | Yes     | Yes              |
| unsigned char      | Yes          | Yes     | Yes              |
| String             | Yes          | No      | Yes              |
| DeepState_Malloc() | No           | No      | No               |

## Team Website
A website has been setup for this project. It can be found at this link:
https://www.cefns.nau.edu/capstone/projects/CS/2020/GenTest-S20/index.html


