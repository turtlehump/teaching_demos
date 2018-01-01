#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
  srand(time(NULL));
  //This "seeds" the random number generator with the number of seconds since 
  //midnight Jan 1, 1970 (known as "unix time") so that its not the same random
  //number every time you run this program.

  int guess, guesses = 0;
  int special_num = (rand() % 100) + 1; //Why did I do a plus 1...?
  cout << "I have picked a random number x such that: 1 <= x <= 100" << endl;

  do
  {
    do
    {
      cout << "What is your guess? ";
      cin >> guess;
      if(guess < 1 || guess > 100)
        cout << "Bad guess." << endl;
    }while(guess < 1 || guess > 100);

    guesses++;

    if(guess > special_num)
      cout << "Lower." << endl;
    if(guess < special_num)
      cout << "Higher." << endl;
    if(guess == special_num)
    {
      cout << endl << "WINNER!" << endl;
      cout << "You guessed the number in " << guesses << " guesses." << endl;
      //There is nothing stopping me from ending the program right here...
      return 0;
    }
  }while(guesses < 10);
  //If the user had won then the program would have exited inside the loop
  //If the program gets out of the loop then we know that they have lost

  cout << "You did not guess the number in 10 guesses." << endl;
  cout << "The number was: " << special_num << endl;
  cout << "You lose." << endl;

  return 0;
}
