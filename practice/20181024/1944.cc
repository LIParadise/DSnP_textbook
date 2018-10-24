#include <iostream>

using namespace std;

class foo{
  public:
    virtual void f() { cout << "base f" << endl; }
    void g() { cout << "base g" << endl; }
    virtual void h() = 0;
};

class bar : public foo {
  public:
    void f() { cout << "derived f" << endl;}
    void g() { cout << "derived g" << endl;}
};


int main(){

  foo* ptr = new bar;
  // class foo have no member named 'i';
  delete ptr;

  return 0;
}
/*
1944.cc: In function ‘int main()’:
1944.cc:25:18: error: invalid new-expression of abstract class type ‘bar’
foo* ptr = new bar;
^~~
1944.cc:12:7: note:   because the following virtual functions are pure within ‘bar’:
class bar : public foo {
  ^~~
    1944.cc:9:18: note:     virtual void foo::h()
    virtual void h() = 0
*/
