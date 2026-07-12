Lifecycle of Execution of code:
Writing code -> compiler -> linker -> loader -> runtime -> constructors -> vptr -> FunctionCalls -> Destructor

1. Preprocessing

Preprocessor runs first
it Handles
#include
#define
#conditional compilation (#define,#ifdef..)

Example:
#include<iostream>
is replaced with the contents of the header
Output: Huge expanded source files

