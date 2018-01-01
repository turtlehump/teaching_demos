#include <iostream>

using namespace std;

//So there are 3 types of loops in C++:
// * while loop
// * do-while loop
// * for loop
//
//* A while loop will check the condition first and will run 1 iteraion
//if the condition evaluates to true. The condition could start off
//false and the block of code may never be run. A while loop can run
//any number of iteraions, from 0 to infinity.
//Here is the syntax:
//  while(condition)
//  {
//    some stuff;
//  }
//
//
//* A do-while loop is like a while loop except it will always run at
//least 1 iteration. These are generally used when asking a user for input
//(you always need to ask for input at least once, and you may need to ask
//more times if they enter in an invalid value), but every situation is unique.
//A do while loops can run anywhere from 1 to infinity iterations.
//Here is the syntax:
//  do
//  {
//    some stuff;
//  }while(condition);      < notice the ; at the end
//
//
//* A for loop is the exact same thing as a while loop, just with different syntax.
//You can also declare/assign value to a variable (generally the iteration counter)
//in your for loop. Like a while loop, a for loop can run any number of iterations,
//from 0 to infinity.
//Here is the syntax:
//  for(variable declaration/assignment; condition; post-iteration code, generally increment iteration counter)
//  {
//    some stuff;
//  }
//
//*Be sure to manipulate the variable you use in the condition somewhere in the loop,
// otherwise you will be asking the same condition every iteration and will probably
// end up with infinity iterations, or a "forever loop" (kill a program with <CTRL>C)
//*If you think you have a forever loop, put a cout statement in your loop and rerun
// your program. Your statement should just repeat over and over and over.

int main()
{
  int start_num, end_num = 10;

  cout << endl << "We are going to count up to " << end_num << " from your number." << endl << endl;

  cout << "Gimme an int: ";
  cin >> start_num;
  cout << endl;

  int tmp1 = start_num;
  cout << "while loop:" << endl;
  while(tmp1 < end_num)
  {
    cout << "count: " << tmp1 << endl;
    tmp1++;
  }
  cout << endl;

  int tmp2 = start_num;
  cout << "do-while loop:" << endl;
  do
  {
    cout << "count: " << tmp2 << endl;
    tmp2++;
  }while(tmp2 < end_num);
  cout << endl;


  cout << "for loop:" << endl;
  for(int tmp3 = start_num; tmp3 < end_num; tmp3++)
  {
     cout << "count: " << tmp3 << endl;
  }
  cout << endl;

  if(start_num >= end_num)
  {
    cout << "Notice how the do-while loop ran 1 itteration even when the initial condition was false." << endl;
  }

  return 0;
}
