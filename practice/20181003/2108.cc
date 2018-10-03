#include <iostream>

using namespace std;

class base{
  public:
    base ():a(0){};
  private:
    int a;
};

class derived :public base{
  public:
    derived(){}
    void modify(char ich){
      ch = ich;
    }
    char get() const{
      return ch;
    }
  private:
    char ch;
};

int main(){

  base* arr = new derived [10];
  for( size_t i = 0; i < 10; i++ ){
    ((derived*)(arr+i))->modify( (char)(i+66) );
  }
  for( size_t i = 0; i < 10; i++ ){
    cout << ((derived*)(arr+i))->get() << endl;
  }

  return 0;
}
