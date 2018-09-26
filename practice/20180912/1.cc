#include <iostream>

using namespace std;

int main(){

  int a, b, c;
  cout << "a: " << &a << endl;
  cout << "b: " << &b << endl;
  cout << "c: " << &c << endl;

  int* arr[3];
  arr[0] = &a;
  arr[1] = &b;
  arr[2] = &c;
  cout << "* to a: " << &( arr[0] ) << "; it's " << arr[0] << endl;
  cout << "* to b: " << &( arr[1] ) << "; it's " << arr[1] << endl;
  cout << "* to c: " << &( arr[2] ) << "; it's " << arr[2] << endl;

  int* ptr = nullptr;
  cout << &ptr << "; " << ptr << endl;

  return 0;
}
