#include <iostream>

using namespace std;

int main(){
  int a[4] = {0};
  int b = 100;
  cout << &a << endl;
  cout << &b << endl;
  // HERE…
  a[-1] = 42;
  cout << endl << endl;
  for( int i = -2; i > -12; i-- ){
    cout << ++( a[i] ) << endl;
  }
  cout << endl << endl;
  for( int i = 5; i < 9; i++ ){
    cout << ++( a[i] ) << endl;
  }
  cout << endl << endl;
  cout << "b is...:" << b << endl;
} 

/*
   seems that sometimes a minor out-of-range wouldn't cause the program crash immediately.
   */
