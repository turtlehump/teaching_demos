# Intro

If you are reading this, then you are a script kiddie. Congrats! We will get you coding with c++ soon.

**First things first:**
C++ requires compiling. Some languages do not require compiling and instead run in an "environemnt" that does a lot of "magic" for them. A compiler takes your plain text file with source code and generates the executable (machine code) from it. This allows someone to pass source code around so that other people can compile it on their own machine with its own unique setup. The compiler for C++ is "g++" (get it in the setup_x86.exe's list of packages under "Devel" for Cygwin or using "apt-get" for Linux).

Compile C++ code with:
~~~
 $ g++ -o <executable_file_name> <C++_source_code_file_name>
  or
 $ make <item_to_make>
~~~
* If you do not provide a "-o <executable_file_name>" the default name will be "a.exe" on Windows computers and "a.out" on Linux computers.
* "make" will only work if you have the package for it and you have a Makefile in the directory. "<item_to_make>" is optional, the default is to make the first item and cascade from there.

**Order of files to look at and description:**
1. **hello_world.cpp**: The simplest program there is. Look at how it is structured, all C++ programs will follow this template.
2. **variable_types.cpp**: Meant to show you the difference between variable types. What happens when you try to break it?
3. **math.cpp**: Shows you how to do math with variables.
4. **flow.cpp**: Meant to show the basics of if-else statements.
5. **loops.cpp**: Meant to show you the difference between loops. What happens when you enter in a number greater than the end-point?
6. **arrays.cpp**: An array is just an ordered list of same-typed variables. But it has some drawbacks and complications that you should be aware of.
7. **guessing_game.cpp**: Pretty much the simplest game ever but a good intro example of bringing loops and flow together. Also shows how to get a random number.
8. **functions**: A directory that will show you how to use/call functions.
9. **pointers.cpp**: Meant to be an introduction to pointers. You wont really understand their true potential until you get to objects and advanced objects.
10. **Makefile**: The file that gets run when you call "make".
    * The lines with the compile commands have a literal "tab" at the begining ('\t', not multiple spaces). It will not work without it. To get a \t in your plain text files using vim you must hit CTRL+V and then TAB.
