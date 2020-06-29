# The GNU Compiler Collection
The GNU Compiler Collection (gcc) is a compiler system used to compile many languages - most noteably the C Programming Language. To my knowledge, any unix-like operating system will come with gcc pre-installed. MacOS, Linux, Unix, Raspian, all are unix-like operating systems that support unix commands, and support compilationg of c source code into programs.

All C programs (and their source code) *must* be **compiled** prior to execution. Compiling a C program means to take the plain text `.c` source files, and run them through a program to optimize them, link libraires, and finally turn them into binary code that can be understood (and ultimately executed) by the computer's operating system. I really like this graphic used to show whats going on (under the hood) of a c compiler:

![gcc under the hood](https://www.sitesbay.com/cprogramming/images/compile-linking/compiling-linking.png)

To compile and execute some c source code, you can use `cd` to navigate to the directory/folder that has your code and execute the following command:

`gcc filename`

This will output a file in this directory named `a.out`. To run your compiled program, you can simply execute `./a.out` and your c-program will run! Why do we use `./` in that last command? We are telling the computer, "Hey, in this directory (`./`), run the program `a.out`. Why not just `a.out`, though? This is a layer of security coming with more modern unix-like operating systems. I wont dive deep into it, but being able to call `a.out` directly without telling the computer to use the one in our current directory *can* be a security issue. So, bottom-line is to always use `./a.out`!