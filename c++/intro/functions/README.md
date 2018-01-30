# Functions

**Order of files to look at and description:**
1. **definitions.cpp**: Meant to show you the layout and how to get functions in your programs
2. **passing_variables.cpp**: Shows you the differene between passing-by-value and passing-by-reference.
    * I made it skip a number when going from reference back to value on purpose.
    * Follow the output of the executable in the source code and see if you can fix it.
    * Hint: You need to add something, not change something

So now that you know about functions, you may notice that **int main()** looks like a function. Thats because it is! **int main()** is a special function that the compiler calls first. We use **return 0** to represent the program exiting normally because (if you remember from the variable types) 0 is the only number that correlates to false while ALL other values are true. We just flip this concept over and say "0 represents exiting normally and any other return value represents some type of error."
