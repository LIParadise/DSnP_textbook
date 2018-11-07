#include <iostream>

using namespace std;

void f() {
  int* p = new int;
  cout << p << endl;
  delete p;
  cout << p << endl;

  *p = 30;
  int j = *p;
  cout << j << endl;
  int* q = new int(20);
  int k = *p;
  cout << k << endl;

  cout << q << endl;
  delete q;

}

int main(){
  f();
  return 0;
}

/*
   p points to somewhere on heap, thus just like Q1., where we modified another variable on stack through modifying [-1] of an array,
   it's a 'valid' place for us to use, thus there shall have no seg fault, but this is still dangerous, since we may make something on heap garbage.

   deleting p is freeing the place on heap back to system, while value of p is not modified, thus (*p) leads us to same place.

   there's high possibility that the memory address system gave us is exactly the same place, since the size we requested are the same, and we didn't do nothing to heap in between, thus (p==q) shall hold, hence k is 20.
   */
