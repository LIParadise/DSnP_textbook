#include <iostream>

using namespace std;

void f( const int * ptr ){
  cout << "inside f()" << endl;
  cout << ptr;
}

int main(){

  int ptr[] = {3,1,4,1,5};
  cout << "inside main: ptr = " << &ptr << endl;

  f( ptr );

  return 0;
}
