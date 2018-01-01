#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int number, sum = 0, min, max = 0;
  bool min_set = false;
  vector<int> my_numbers;

  cout << "Give me some numbers (hit <Ctrl>D when finished):" << endl;
  while(cin >> number)
  {
    my_numbers.push_back(number);

    //its good practice to do simple math like this as you get the data
    //so you dont have to step through the list again at the end. You want
    //to do all the math in 1 pass if you can help it.
    sum += number;

    if(!min_set)
    {
      min = number;
      min_set = true;
    }
    else
    {
      if(number < min)
      {
        min = number;
      }
    }

    if(number > max)
      max = number;
  }

  cout << "***************************************" << endl;
  cout << "You entered " << my_numbers.size() << " numbers." << endl;
  cout << "Sum: " << sum << endl;
  cout << "Minimum: " << min << endl;
  cout << "Maximum: " << max << endl;
  cout << "Range: " << max - min << endl;

  double average = (sum * 1.0) / my_numbers.size();
  cout << "Average: " << average << endl;

  cout << "***************************************" << endl;
  cout << "Stepping through again, with an iterator." << endl;
  vector<int>::iterator iter;
  for(iter = my_numbers.begin(); iter != my_numbers.end(); iter++)
  {
    //So an iterator is actually a pointer to the node in the vector.
    //If we try to print out the iter, we get an error
    //If we dereference the pointer first (with *), we get what it is pointing to
    //cout << iter << endl;
    cout << *iter << endl;
  }

  cout << "***************************************" << endl;
  cout << "Stepping through BACKWARDS, with an iterator." << endl;
  for(iter = my_numbers.end() - 1; iter != my_numbers.begin(); iter--)
  {
    //cout << iter << endl;
    cout << *iter << endl;
  }
  //iter will be at my_numbers.begin() and we havent printed it yet.
  //This is guarenteed because that's the condition to exit the for loop
  //cout << *iter << endl;
  cout << *iter << endl;

  return 0;
}
