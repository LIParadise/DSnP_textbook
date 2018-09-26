#include <iostream>

using namespace std;

int main(){
  int *p = new int [10];
  int *r = new int (10); // QQ躺著也中槍
  int *q = new int [20];
  cout << "pointer p have value: \"" << (void*) p << "\"" <<  endl;
  cout << "pointer r have value: \"" << (void*) r << "\"" <<  endl;
  q = p;
  delete [] q;
  cout << "after delete..." << endl;
  int* s = new int [8];
  cout << "pointer s have begin at: \"" << (void*) s << "\"" <<  endl;
  cout << "pointer s have   end at: \"" << (void*) (s+7) << "\"" <<  endl;
  cout << "hello" << endl;
}
