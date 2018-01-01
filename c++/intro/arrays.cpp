#include <iostream>
#include <unistd.h> //for sleep()

using namespace std;

#define ARRAY_SIZE 10 //This is the conventional way of declaring constatns.

int main()
{
  int index;
  int my_numbers[ARRAY_SIZE];
  cout << "Indexs in arrays go from 0 to (size - 1)" << endl;
  cout << "That is just how you count in programming. It's because the index is" << endl;
  cout << "actually the offset from the start. (Start+0, Start+1, Start+2...)" << endl;
  cout << endl;
  cout << "An array of 10 ints has been declared for you." << endl;
  cout << endl;
  cout << "Here are the addresses of some variables used in this program:" << endl;
  cout << "&my_numbers = " << &my_numbers << endl;
  cout << "&index = " << &index << endl;

  sleep(3);

  if(&index < &my_numbers[0])
    cout << "I can tell you right now that this example is not going to work as intended based off those addresses, but we can still learn a little bit." << endl;

  cout << endl;
  cout << "Now give me some ints" << endl << endl;;
  cout << "variable_name   address   value" << endl;
  //This is the proper way of getting values into your array
  for(index = 0; index < ARRAY_SIZE; index++)
  {
    cout << "my_numbers[" << index << "]: " << &my_numbers[index] << ": ";
    cin >> my_numbers[index];
  }
  cout << endl;
  cout << "Notice how the addresses are in order. Declaring an array" << endl;
  cout << "will give you one continuous block of memory." << endl;
  cout << "(Refer back to why we count the way we do)" << endl;

  sleep(3);

  cout << "You entered: " << endl;
  //This is the proper way of getting values out of your array
  for(index = 0; index < ARRAY_SIZE; index++)
  {
    cout << my_numbers[index] << endl;
  }
  cout << endl;

  sleep(1);

  if(&index > &my_numbers[0] && &index < &my_numbers[0] + 20) //index is within 20 memory blocks of the start of our array
  {
    cout << "If you want this example to work then the number you enter needs to be different than the index." << endl;
    cout << "Truth be told, I dont care what you do. There is a time to break programs and a time to learn. Sometimes you do both at once." << endl;
    cout << "This is your time and the more you dont follow my directions then the longer it will take you to learn what I'm trying to teach you." << endl;
    cout << "So once again, if you want this example to work then the number you enter needs to be different than the index." << endl << endl;
    sleep(4);

    index = 0;
    int iterations = 0;
    int* reference_address;
    cout << "Now enter in as many numbers as you want (it will echo): " << endl;
    //This is NOT the way to get values into your array
    while(1)
    {
      if(index == ARRAY_SIZE)
        cout << endl << "Getting sketchy..." << endl << endl;

      //This is basically making sure that I know where I am before I get the input, in case something gets over written.
      //You dont need to do this if you get inputs properly.
      reference_address = &my_numbers[index];

      if(reference_address == &index)
        cout << endl << "Do you remember this next address...?" << endl << endl;

      cout << "get:  my_numbers[" << index << "]: " << &my_numbers[index] << ": ";
      cin >> my_numbers[index];
      cout << "echo: my_numbers[" << index << "] = " << my_numbers[index] << endl;

      //You could also ask if(reference_address != &my_numbers[index]) because we never explicitly changed the index since we set the reference address
      if(reference_address == &index)
      {
        cout << endl << "We just over wrote the index." << endl << endl;
        break;
      }

      index++;
      iterations++;
    }

    cout << "Look at those last 2 lines. We changed the index variable by going farther" << endl;
    cout << "than our array was meant for. We could have really messed something up if" << endl;
    cout << "we had changed a different variable. This example was meant to show you that" << endl;
    cout << "although arrays are faster, they are harder to use (in terms of programming)" << endl;
    cout << "and have poterntial to be malicious without intent. Be careful when using" << endl;
    cout << "arrays. Or just use a Vector." << endl;
    cout << endl;
  }
  else
  {
    cout << "This example wasnt going to show you what I wanted it to." << endl;
    cout << "The addresses of variables are not in the order I need them to be in and that is out of my control." << endl;
  }

  return 0;
}
