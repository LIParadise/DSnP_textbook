#include <iostream>

using namespace std;

int main(){

  int* ptr = new int[10];

  cout << (void*) ptr << endl;
  ptr = ptr+1;
  cout << (void*) ptr << endl;
  delete[] (ptr-1);

  return 0;
}
