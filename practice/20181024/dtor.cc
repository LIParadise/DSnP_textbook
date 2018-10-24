#include <iostream>

class dummy1{
  public:
    ~dummy1(){
      std::cout << "dummy1" << std::endl;
    }
};

class dummy2{
  public:
    ~dummy2(){
      std::cout << "dummy2" << std::endl;
    }
};

class base{
  /*
  public:
    virtual ~base() {}
    */
  private:
    dummy1 d;
};

class child : public base{
  dummy2 d;
};

int main() {

  std::cout << "base pointer to child in main" << std::endl;
  base* ptr = new child;
  delete ptr;
  std::cout << std::endl << std::endl;

  child c;

  return 0;
}

