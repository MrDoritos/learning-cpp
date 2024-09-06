
# Setting up your own C++ environment

## Introduction

ChatGPT will introduce you to the language, since the libraries that trained it were probably written in C or C++. <br/>

``"Programming in C++ is like life being a box of chocolates—sure, you never know what you're gonna get, but with enough rope and pointers, you might just shoot yourself in the foot before you even open the box!"``<br/>

The original joke was:<br/>

`"shooting yourself in the foot with rope"`<br/>

Explanation:<br/>

``In essence, the joke combines the idiom of "shooting yourself in the foot" with the concept of "having enough rope to hang yourself" (another idiom that means having enough freedom or resources to cause your own downfall) to highlight the potential dangers of low-level programming, where a small mistake can have big consequences.``<br/>

##

These jokes shine a little light into a common reason why C++ may be especially daunting to newcomers. Those new to programming may not have much of an issue, but those that have a background in other languages might be shocked by C++'s lack of hand-holding. C++ isn't even considered a *safe* language compared to Rust which can determine or even prevent memory leaks and dangling pointers at compile time.  <br/>
This is all nonsense right now though, we should set up a C++ environment instead.  <br/>
How you set up your environment is fully dependent on your preferences or work requirements. Here are some important items:<br/>

**Name**|**Meaning**
--------|-----------
IDE|Integrated Development Environment
git|Source code control system
GitHub|Privately owned company that<br/>hosts git repositories
Compiler|Turns source code into a program
MSVC|Microsoft Visual C++ Compiler
GCC|GNU Compiler Collection
G++|GCC G++
GDB|GCC Debugger
MinGW|Minimalist GNU for Windows
.cpp|C++ source file
.h or .hpp|C++ header file
Executable|Program, application
Library|Similar to an executable but<br/>lacks a `main` (entry point)
build system|Vastly improves the ability<br/>to include dependencies<br/>and reduce compile time
Makefile|make build system
CMakeLists.txt|CMake build system

Your system of choice is also up to you, but I will be focusing on Linux primarily.

## Installation
If you are on Linux, you likely already have GCC and G++ installed, if not it's fairly easy.
`sudo apt install g++`<br/>
Install git
`sudo apt install git`<br/>
Personally I use Visual Studio Code because it's easy to use, it has everything I need, it doesn't make or require special files, and it has a ton of extensions for languages and features. The only downside is that the program is heavy like Discord or a web browser (for a reason). If you don't choose this, you will just need something to edit files.  
[Visual Studio Code](https://code.visualstudio.com/)

If you are on Windows, you will need to make sure you can access the compiler from the command line once it's installed. If you can't, well that's why I don't use Windows.

## Ready
Once everything is installed, you can find a directory you would like all your project folders in, that is where we will clone this repository.  
Open that directory in the terminal.  
`$ git clone https://github.com/MrDoritos/learning-cpp`  
We now have this resource on our computer. This is how developers share code and suggest contributions.  
`$ cd learning-cpp`  
`learning-cpp$ cd Examples`  
`learning-cpp/Examples$ g++ helloworld_cpp.cpp`  
`learning-cpp/Examples$ ls`  
`a.out  helloworld_c.c  helloworld_cpp.cpp  helloworld.md`  
`learning-cpp/Examples$ ./a.out`  
`Hello World!`  
We compiled our `helloworld_cpp.cpp` [program](../Examples/helloworld.md)! It output to `a.out` but that can be changed by adding a compiler flag `-o`  
`g++ helloworld_cpp.cpp -o helloworld_cpp.o`  
