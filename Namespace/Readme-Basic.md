Namespace:

#include<iostream> : Header, from a C++ standard Library that provides input/output steam functionality -> ibstdc++.so (linux)

This compiled code:
1. Writes to console
2. manages buffers
3. handles OS calls

Your code
   |
   v
<iostream>   ---> declarations (compile time)
   |
   v
C++ Standard Library (.so/.dll) ---> implementation (link time + run time)

<iostream> tells the compiler what exists; the C++ Standard Library provides how it works

when we built a C++ Program, two main tools work one after the other:
compiler(creates a object file)-> Linker -> executable

Compiler: 

Checks syntax
Check types
Expands #include (preprocessor replaces macros)
compiles each .cpp code separately
produces object files (.obj,.o) 
(main.cpp -> main.o)
object file:
it contains machine code
still has unresolved symbols like std::cout

Linker: 

it combines all .o files
Finds implementations of functions/variables
Links libraries (.so, .a, .dll)
Produces the final executable

Source code
   |
Preprocessor   → expands includes/macros
   |
Compiler       → checks types, creates .o (checks declarations, if function exeist, is parameters match, is retrun type correct)
   |
Linker         → connects implementations
   |
Executable

Each .cpp is compiled separately, and each one gets its own copy of included headers.
------------------------------------------------------
Step	               Tool	          Command
Compile	            Compiler	        g++ -c file.cpp
Link	               Linker	        g++ file.o
Run	               OS	              ./app


we can't declare a two things (variables + functions) with same name in same scope in c++ compiler will get confused
But function overloading is supported

┌──────────────────────────┐
│   Compiler sees symbol   │
│        "count"           │
└─────────────┬────────────┘
              │
              ▼
┌──────────────────────────┐
│  NAME LOOKUP PHASE       │
│  Find all "count"        │
│  visible in scope        │
└─────────────┬────────────┘
              │
      ┌───────┴─────────┐
      │                 │
      ▼                 ▼
┌──────────────┐   ┌──────────────┐
│ variable     │   │ function     │
│ int count    │   │ std::count() │
└──────────────┘   └──────────────┘
      │                 │
      └───────┬─────────┘
              ▼
┌──────────────────────────┐
│ Mixed symbol types found │
│ (variable + function)   │
└─────────────┬────────────┘
              ▼
❌ ERROR: name is ambiguous
(overload resolution NEVER starts)

Source Code 
   ↓
Lexical Analysis (Input: Source code / Output: Tokens), Lexical analysis converts source code into a stream of tokens such as keywords, identifiers, literals, operators, and punctuators
   ↓
Syntax Analysis 
   ↓
Semantic Analysis   ← (name lookup here)
   ↓
Intermediate Code
   ↓
Optimization
   ↓
Machine Code
   ↓
Linker
   ↓
Executable


