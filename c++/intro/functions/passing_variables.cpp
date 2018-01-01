#include <iostream>

using namespace std;

bool good_value(int value);
void pass_by_value(int value, int change);
void pass_by_reference(int &value, int change); //notice the & in &value

int main()
{
  int value;
  bool valid;
  int change = 3;
  do
  {
    cout << "Give me an int between 0 and 9: ";
    cin >> value;
    if(!good_value(value))
    {
      cout << endl << "Bad value." << endl << endl;
      valid = false;
    }
    else
    {
      valid = true;
    }
  }while(!valid);

  cout << endl;

  for(int i = 0; i < 4; i++)
  {
    pass_by_value(value, change);
    cout << endl << "Back in main()" << endl << endl;
    pass_by_reference(value, change);
    cout << endl << "Back in main()" << endl << endl;
  }

  cout << endl;
  cout << "Do you see how the value of the variable does not" << endl;
  cout << "change in main() when we pass by value, but it does" << endl;
  cout << "when we pass by reference." << endl;

  return 0;
}

bool good_value(int value)
{
  if(value < 0 || value > 9)
    return false;
  return true;
}

//Passing by VALUE creates a NEW local variable with the same value as the passed variable.
//We can manipulate this variable in the function without changing the data of the variable in main().
//If you do want to change the value of the passed variable then you
//can either pass by reference or make it the return value.
//You can think of this as manipulating a copy of the variable, not the variable itself.
void pass_by_value(int value, int change)
{
  int original_value = value;
  cout << "*" << original_value << "* PASSED BY **VALUE**" << endl;
  for(int i = 0; i < change; i++)
  {
    cout << original_value << " + " << i << " = " << value << endl;
    value++; //we are changing the passed in variable
  }
}

//When we pass by REFERENCE we are actually passing the address of the variable.
//Manipulating this variable changes *the data at the address of said variable*
//which is why it also chages the variable's value in main().
//You can think of this as manipulating the actual variable.
void pass_by_reference(int &value, int change)
{
  int original_value = value;
  cout << "*" << original_value << "* PASSED BY **REFERENCE**" << endl;
  for(int i = 0; i < change; i++)
  {
    cout << original_value << " + " << i << " = " << value << endl;
    value++; //we are changing the passed in variable
  }
}
