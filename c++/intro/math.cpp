#include <iostream>

using namespace std;

//There are 5 basic math functions:
// * plus (+)
// * minus (-)
// * multiplication (*)
// * division (/)
// * modulus (%)
//
//Ill assume you know what the first 4 are. Modulus is the
//remainder when you divide the first opperand by the second.
//You can get other functions (sin, cos, sqrt, etc.) by importing
//libraries.
//
//* All programming languages are smart enough to reconize PEMDAS
//* The computer evaluates the right side of the equals sign and
//  then assigns it to the left.
//* You can assign an int to a double, but not a double to an int.
//* If either operand is a double, the answer evaluates to a double.
//* There is a thing known as "integer division", dividing 2 ints evaluates to an int
//  * Sometimes you want this answer, sometimes you dont. Every situation is unique
//  * If you do not want this answer you must turn one of the operands into a double
//  * It doesnt matter if you are assigning it to a double.

int main()
{
  int i, j;
  cout << "I need 2 ints" << endl;
  cout << "i: ";
  cin >> i;
  cout << "j: ";
  cin >> j;

  cout << "Here are the math functions for your numbers:" << endl;
  int sum = i + j;
  cout << "i + j = " << sum << endl;

  int difference = i - j;
  cout << "i - j = " << difference << endl;

  int product = i * j;
  cout << "i * j = " << product << endl;

  int quotient_i = i / j; //integer division
  cout << "i / j = " << quotient_i << endl;

  double quotient_d = (1.0 * i) / j; //I turn one operand into a double
  cout << "(1.0 * i) / j = " << quotient_d << endl;

  int modulus = i % j;
  cout << "i % j = " << modulus << endl;

  return 0;
}
