#include <iostream>

using namespace std;

int main(){

  int* arr = new int[10] {0x32};
  for( size_t i = 0; i < 10; i++ ){
    cout << arr[i] << "\t";
  }

  return 0;
}
