#include <iostream>

using namespace std;

//"Flow" is the term used to describe which blocks of code your program runs
//based on certain true-false "questions" (called statements).
//"Do I go this way? Or that way?"
//"Do I run this if-statement? Or do I take the else?"
//
//Honestly, I cannot teach you flow. Every situation is unique.
//There is no "but we use it this way most often". I can only teach
//the rules of how to ask your own questions, and then you must
//apply it to your own situation. If you can't get basic flow down then
//there is no hope for you as a programmer. First day of college, first
//programming class, the professor walks in and the first thing he says is:
//
//There will be some of you in this class that spend 3 hours a week and
//get an A, and there will be others that spend 20 hours a week and get a C.
//Thats just how this is. It doesnt mean that you're stupid if it takes you a
//long time, but it does mean that you should be doing something else.
//
//So that being said, be honest with yourself. This isnt for everyone.
//This program is pretty straight forward in terms of flow but like I said,
//every situation is unique.


int main()
{
  int value;
  cout << "Give me an int: ";
  cin >> value;

  cout << endl;
  cout << value << " is ";

  if(value >= 0)
    cout << "POSITIVE";
  else
    cout << "NEGATIVE";
  
  cout << " and ";

  if(value % 2 == 0) //double equal sign (==) is a question, not assignment
    cout << "EVEN";
  else
    cout << "ODD";

  cout << endl;

  return 0;
}
