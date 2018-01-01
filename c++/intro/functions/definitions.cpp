#include <iostream>

using namespace std;

//*A function must have a return type.
//*If there is nothing to return, then it is a "void" function.

//*You must DELCARE your function before main().
//*You can choose to DEFINE it before or after main().
//**This is because the compiler reads a file from start to end,
//  not all at once. It wont know where to go if you call your
//  function without at least DECLARING it first.
//**It is only a difference of convention and style, not function
//**If you DEFINE it after main(), you must put a ; after
//  the DECLARATION (see below)

//*This file has TERRIBLE style (main() is in the middle...)
// It is only meant to show that you can DEFINE a function either
// before or after main(). Do not follow this convention of mixing.

//*It is also bad pratice to use global variables, but they
// work well for this example because I can show both ways of
// defining functions.
int a, b;

//I DEFINE this function before main()
void set_variables()
{
  cout << "This program will show you all the maths values"
       << " of 2 given numbers.";
  cout << endl << endl;
  cout << "Give me an int (a): ";
  cin >> a;
  cout << "Give me another int (b): ";
  cin >> b;
}

//I only DECLARE this function before main()
//Notcie the ; at the end when only DECLARING
void print_maths();

int main()
{
  set_variables();
  cout << endl;
  print_maths();

  cout << endl << "Hope that helped!" << endl;
  return 0;
}

//I can DEFINE the function after main()
//It must be an exact match to the declaration (name and arguements)
void print_maths()
{
  cout << "a + b = " << a + b << endl;
  cout << "a - b = " << a - b << endl;
  cout << "a * b = " << a * b << endl;
  cout << "a / b = " << a / b << endl;
  cout << "a % b = " << a % b << endl;
}
