#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include "video.h" //use quotes to include your own classes

using namespace std;

int main()
{
  srand(time(NULL));

  Video video = Video();
  string title, URL;

  cout << "Whats the title of the video: ";
  getline(cin, title);
  video.change_title(title);

  bool good_url;
  do
  {
    cout << "And the URL: ";
    //cin.ignore(1000,'\n');
    getline(cin, URL);
    if(!video.assign_url(URL))
    {
      cout << "Video must be from youtube.com" << endl;
      good_url = false;
    }
    else
    {
      good_url = true;
    }
  }while(!good_url);

  cout << endl;
  video.print(); //Think about why we didnt put this in a cout statement
  cout << endl;
  cout << endl << "Your video went viral!" << endl << endl;
  int view_count = 100000 + (rand() % 100000);
  //randome number between  100000 and 200000
  for(int i = 0; i < view_count; i++)
  {
    video.view_tick();
    //We have to call a function to increment the video's view count
    //because the member variable is private.
  }
  sleep(2);
  cout << endl;
  video.print();

  return 0;
}
