#include <iostream>
#include <string>
#include <unistd.h> //for sleep()

using namespace std;

int main()
{
  cout << "Remember that <Ctrl>C kills a program." << endl;
  cout << "You will need to know this if you dont follow the directions because I'm not error checking." << endl;;
  cout << endl << endl;
  sleep(5);

  cout << "****************************************************" << endl;
  cout << "INTS:" << endl;
  cout << "Ints are positive or negative WHOLE NUMBERS." << endl << endl;
  int i, j;
  cout << "Give me an int (i): ";
  cin >> i;
  cout << "You entered: " << i << endl;
  //You can do math in the cout statement if you dont need to save the result.
  cout << "i - 2 = " << i - 2 << endl << endl;

  cout << "Give me an int (j): ";
  cin >> j;
  cout << "You entered: " << j << endl;
  cout << "i + j = " << i + j << endl;
  cout << "i - j = " << i - j << endl;
  cout << "i * j = " << i * j << endl;

  //Notice your answer when using "integer division".
  //When both operands are integers, the answer is evaluated as an integer
  cout << "i / j = " << i / j << "\t\tNotice the integer division" << endl;

  //Sometimes you may want that (^) answer, other times you may not.
  //To get the answer in decimal form you make one of the
  //operands a double, which in turn makes the answer of that
  //expression to be a double.
  cout << "(i * 1.0) / j = " << (i * 1.0) / j << endl;

  cout << endl << endl;

  cout << "****************************************************" << endl;
  cout << "DOUBLES:" << endl;
  cout << "Doubles are positive or negative WHOLE OR DECIMAL NUMBERS." << endl << endl;
  double d, e;
  cout << "Give me a double (d): ";
  cin >> d;
  cout << "You entered " << d << endl;
  cout << "d - 2 = " << d - 2 << endl << endl;

  cout << "Give me a double (e): ";
  cin >> e;
  cout << "You entered: " << e << endl;
  cout << "d + e = " << d + e << endl;
  cout << "d - e = " << d - e << endl;
  cout << "d * e = " << d * e << endl;
  cout << "d / e = " << d / e << endl;

  cout << endl << endl;

  cout << "****************************************************" << endl;
  cout << "BOOLEANS:" << endl;
  cout << "Booleans are simply true/false. Booleans are used to evaluate" << endl;
  cout << "conditions for if-statments or loops. Ints/doubles can also be" << endl;
  cout << "evaluated as booleans. 0 is false and ANYTHING ELSE is true." << endl;
  cout << "I'll show you. " << endl;
  double bool_tmp;
  do
  {
    cout << "Give me a number (you wont be able to advance until you enter in a false statement): ";
    cin >> bool_tmp;
  }while(bool_tmp);

  cout << endl << endl;

  cout << "****************************************************" << endl;
  cout << "STRINGS:" << endl;
  cout << "Strings are basically what humans think of as \"words\"." << endl;
  cout << "They are just an ordered list of characters." << endl << endl;
  string s;
  cout << "Give me a string:" << endl;
  cin >> s;
  cout << "You entered: " << s << endl;
  cout << endl;

  cout << "Give me another string (using getline):" << endl;
  //You need to do a .ignore() before the getline() because of our
  //previous cin statements. When you get a variable using cin it absorbs everything
  //UP TO BUT *NOT INCLUDING* the next whitespace (space, tab, newline). That means
  //there will still be a newline in the input buffer after we use cin.
  //getline() absorbs everything UP TO BUT *NOT INCLUDING* the next newline.
  //So getline() will only get that leftover newline if it is not
  //purged before.
  cin.ignore(1000,'\n');
  getline(cin, s);
  cout << "You entered: " << s << endl;

  cout << endl << endl;

  cout << "****************************************************" << endl;
  cout << "CHARS" << endl;
  cout << "Chars are just an individual character." << endl << endl;
  char c;
  cout << "Give me some chars (<Ctrl>D to end):" << endl;
  while(cin >> c)
  {
    cout << "You entered: " << c << endl;
  }
  cout << endl;

  return 0;
}
