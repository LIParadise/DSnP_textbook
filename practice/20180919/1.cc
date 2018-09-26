#include <iostream>
#include <stdlib.h>

using namespace std;

int* f(int i ){

  /*
  int a;
  int b;
  int c;

  cout << &a << endl;
  cout << &b << endl;
  cout << &c << endl;
  */

  int* p = new int;
  *p = i;
  int* q = new int;

  cout << &p << "\t" << p << endl;
  cout << &q << "\t" << q << endl;
  cout << "end" << endl << endl;

  free( p );
  delete q;

  return p;

}

int main(){

  int* ptr = f(2049);
  cout << "playing fire...\t" << ptr << " is " << *ptr << endl;
  f(3);
  f(5);

  return 0;
}
