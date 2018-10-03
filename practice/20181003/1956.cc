#include <iostream>

using namespace std;
class foo{
  public:
    void operator () (int* ptr ) const{
      *ptr = 314;
    }
}bar;

int main(){

  int* ptr = new int (628);
  bar(ptr);
  cout << *ptr << endl;
  delete ptr;

  return 0;
}
