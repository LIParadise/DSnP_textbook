#include <iostream>

using namespace std;

void f( int a = 0 );

int main(){

  f(1 );
  f(  );

  return 0;

}

void f( int a ){
  cout << a << endl;
}
