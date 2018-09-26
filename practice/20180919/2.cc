#include <iostream>
using namespace std;

class B{

  public:
    B(int b = 2048 ):data(b){}
    B& operator = (int i) { data = i;
      cerr << "operator = of B called..." << endl;
      return *this;
    }
    friend ostream& operator <<( ostream& os, const B b){
      return os<< b.data;
    }
  private:
    int data;
};

class A{

  public:
    A(int _a, int _b ):b(_b), data(_a){ b = B(4096) ;}
    friend ostream& operator << (ostream& os, const A a){
      return os << a.b;
    }
  private:
    B   b;
    int data ;
};


int main(){

  A a( 10, 20 );
  cout << "in main... " << a << endl;
  return 0;
}
