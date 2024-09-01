# Hello World!

C and C++ have vastly different hello world programs.<br>
You will see that C has a focus on typing speed, while C++ has a focus on program scalability.<br>
From the program, `std::cout` means "standard output" and `<<` means "output to".<br>
`std::endl` means "end line" and `\n` means "new line", they are almost the same except<br>
`std::endl` will flush the buffer, while `\n` will not.<br>

If you wanted the exact same functionality in C while being able to specify the output buffer<br>
you would have to use `fprintf(stdout, "Hello World!\n");`<br>
But that doesn't flush the buffer, so you would have to use `fflush(stdout);` in addition<br>

If you are starting out, this may seem like a very complex hello world, and although the<br>
differences are huge, once you break it down, it's not that bad.<br>

`<<` and `>>` may resemble the bitwise operators, but they are not the same.<br>
`<<` and `>>` are operator overloads for a class called `std::ostream` and `std::istream`<br>