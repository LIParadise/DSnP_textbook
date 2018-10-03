#include <iostream>

using namespace std;

int main(){

  const int i = 0;

  int & const ref = i;

  return 0;
}

/*
1955.cc:9:15: error: ‘const’ qualifiers cannot be applied to ‘int&’
   int & const ref = i
*/
