#include "video.h" //Use quotes to include your class

//We define member functions of a class in a .cpp file
//Every function we declared in the .h file must be defined.

//The first line of the definition needs to be the exact
//same as the declaration line (arguments too).
//However, you also need to include the class name before a :: since
//we are defining the function outside of the class block.
Video::Video()
{
  m_title = "";
  m_views = 0;
}

void Video::print()
{
  cout << m_URL << endl;
  cout << "\"" << m_title << "\": " << m_views << " views" << endl;
}

void Video::change_title(string new_title)
{
  //This is why I use an m_ prefix for my member variables
  m_title = new_title;
}

bool Video::assign_url(string URL)
{
  if(URL.find("youtube.com") == string::npos)
  //we did not find "youtube.com" in the given URL
  {
    return false;
  }

  m_URL = URL;
  return true;
}

void Video::view_tick()
{
  m_views++;
}

int Video::get_views()
{
  return m_views;
}
