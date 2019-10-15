---
title: "Project"
featured_image: '/images/main_screen.svg'
---

While tools such as Fuzzers and Symbolic Execution have made great strides to provide automatic methods for testing, most developers are not aware of or do not understand how to use them. Currently, a majority of companies still use traditional manual testing techniques to prove software stability and security. Our client, Associate Professor Alex Groce at Northern Arizona University has been working alongside cyber security company Trail of Bits to fix this by creating DeepState.

DeepState provides a simple testing framework that allows for easier access to Manticore, Angr, and Dr.Fuzz symbolic execution and fuzzing engines. Still, the integration of DeepState into large-scale projects is difficult for existing technologies due to the need for testing harnesses in C++ native to the DeepState framework. To solve this problem, Alex Groce and Trail of Bits have contracted Team GenTest to make a solution that:


  * Provides an easy-to-use method for creating standalone unit tests from DeepState in traditional testing frameworks such as GoogleTest.
  * Allows for the auto-generated binaries from Manticore, Angr, and Dr.Fuzz to be used in the developer’s traditional framework.
  * Does not need to make use of the DeepState library to benefit from its automatic testing techniques. 

If successful, the solution created by GenTest will provide an easier way for developers in companies like Google, Facebook, and Bloomberg to make use of DeepState to automatically test their software products.
