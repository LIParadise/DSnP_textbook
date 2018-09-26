#include <iostream>

using namespace std;

int main(){

  int a, b, c;
  while( cin >> a >> b ){
    c = a + b;
    cout << "a: " << &a << "; a = " << a << endl;
    cout << "b: " << &b << "; b = " << b << endl;
    cout << "c: " << &c << "; c = " << c << endl;
  }
  return 0;
}
