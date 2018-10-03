#include <iostream>

using namespace std;

int main(){

  const int i = 300;
  // int& const ref = i;
  // wrong, there is no "const reference to int"
  int const & ref = i;
  // okay.

  return 0;
}
