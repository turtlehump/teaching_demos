#ifndef VIDEO_H   //if not defined
#define VIDEO_H   //define it
//These are special compiler commands that allow you to include this class in other files
//Note the #endif at the bottom of this file

#include <iostream>
#include <string>

using namespace std;

class Video
{
  public:
  //Anything in the public space of a class can be accessed from outside the class.
  //It is good practice to keep all the variables of the class private
  //and then have all the functions that manipulate the variables public.
  //This way you have to call a function to manipulate the variables,
  //which restricts what someone can do with this class, which reduces errors.

    //Constructor: *Special function that every class needs to have.
    //             *It MUST be the same exact name as the class itself.
    //             *It CANNOT have a return type.
    //             *It is used to initialize the variables of a class.
    //             *You can have arguements, I just didnt in this example.
    //             *You can have overload the constructor with the arguments.
    Video();

    //* In C++ we usually only have function declarations in the .h files,
    //  but you could define them here if you wanted.
    //* You could overload these functions too.
    //* These are known as "member functions".
    //* Note the ; at the end of every function we do not define
    void print();
    void change_title(string new_title);
    bool assign_url(string URL);
    void view_tick();
    int get_views();

  private:
  //Anything in the private space of a class cannot be accessed from outside the class.
  //If you try to do something like:
  //
  //video.title = <some_string>
  //
  //in main(), you will get an error because main() is not part of this class.

    //These are known as "member variables".
    //I always put an "m_" prefix in my member variables, but this is just style.
    string m_title;
    string m_URL;
    int m_views;
}; //Note the ;
#endif //Note the #endif
