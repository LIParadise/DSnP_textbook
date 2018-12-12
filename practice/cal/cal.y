%{
#include <iostream>

using namespace std;

//-----------------------
//    Extern variables
//-----------------------
int callex (void);
int calparse();
extern "C" int calwrap();

//-----------------------
//    static functoins
//-----------------------
static void calerror(const char *str)
{
   cerr << "Error: " << str << endl;
}

%}


%%


%%

int main()
{
   calparse();
}

