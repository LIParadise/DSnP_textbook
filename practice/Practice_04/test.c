#include <stdlib.h>
#include <stdio.h>
void wait(){
  for( long long int i = 0; i < 1<<23; ++i ){
    long long int* ptr = malloc( sizeof(long long int)*8);
    *(ptr+1) = i;
    *(ptr+1) = i%7;
    *(ptr+1) = i%97;
    *(ptr+1) = i%23;
    *(ptr+1) = i%13;
    *(ptr+1) = i%37;
    *(ptr+1) = i%47;
    *(ptr+1) = i%89;
    free (ptr);
  }
}

void foo() __attribute__((no_reorder));

void foo() {
  int arr[8];
  int i= 0;
  for(i=-8; i <= 8; i++ ){
    printf( "%d\n", arr[i] );
    arr[i] -= 8;
  }
}


int main(){
  void (*ptr) ();
  ptr = &foo;
  printf( "%p\n\n", ptr );
  ptr();
}
