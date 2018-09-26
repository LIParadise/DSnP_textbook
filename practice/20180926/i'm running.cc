#include <iostream>
#include <iomanip>

using namespace std;

void lag(int&& i){
  for( int j = 0; j <i; j++ ){int*ptr = new int ((bool)i); delete ptr;}
}

int main(){

  char charr[4] { '|', '/', '|', '\\' };

  int i = 0;
  while( true ){
    cout << '\b' << charr[i] << flush;
    i++;
    if( i == 4 )
      i = 0;
    lag( (1 << 23)*3 );
  }

  return 0;
}
