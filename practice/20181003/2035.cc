#include <iostream>

using namespace std;

int main(){


  int i = 10;

  const int & ref = i;

  /*
  2035.cc:12:16: error: cannot declare pointer to ‘const int&’
     const int& * ptr = &ref;
                  ^~~
   */
  /*
  2035.cc:17:20: error: invalid conversion from ‘const int*’ to ‘int*’ [-fpermissive]
       int* const ptr = &ref;
                      ^~~~
    */
  const int* ptr = &ref;

  cout << *ptr << endl;

  return 0;
}
