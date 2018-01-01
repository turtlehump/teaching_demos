#include <iostream>

using namespace std;

int main()
{
  cout << "POINTERS:" << endl;
  cout << "* So a pointer is kind of an abstract thought in programming." << endl;
  cout << "* Pointers hold the addresses of other objects in memory." << endl;
  cout << "* One major use of pointers is so that you can have multiple" << endl;
  cout << "  refrences to the same object without having to copy the entire object." << endl;
  cout << "* They are confusing when dealing with individual variables like" << endl;
  cout << "  this, but it will make more sense when we start creating our own objects." << endl;
  cout << "* A picture is probably requred to get a true grasp of pointers and" << endl;
  cout << "  their potential power." << endl << endl;

  int i, j;
  cout << "Im going to need 2 ints for this (i and j): ";
  cin >> i >> j;

  cout << endl;
  cout << "& before a variable gets you the address of that variable." << endl;
  cout << "* before a pointer gets you the value of the variable at that address." << endl;
  cout << endl;

  //You put a * before the name in the declaration to declare a pointer
  int *ptr_i = &i, *ptr_j = &j;
  cout << "i      = " << i << endl;
  cout << "&i     = " << &i << endl;
  cout << "ptr_i  = " << ptr_i << endl;
  cout << "*ptr_i  = " << *ptr_i << endl;
  cout << "j      = " << j << endl;
  cout << "&j     = " << &j << endl;
  cout << "ptr_j  = " << ptr_j << endl;
  cout << "*ptr_j  = " << *ptr_j << endl;

  cout << endl;
  cout << "ptr_j = ptr_i" << endl;
  ptr_j = ptr_i;

  cout << endl;
  cout << "j      = " << j << endl;
  cout << "&j     = " << &j << endl;
  cout << "ptr_j  = " << ptr_j << endl;
  cout << "*ptr_j  = " << *ptr_j << endl;

  return 0;
}
