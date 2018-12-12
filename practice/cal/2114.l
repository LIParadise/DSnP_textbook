%{
#include <iostream>
#include <iomanip>
using namespace std;
static int lineno = 1;
%}
LINE .*\n
%%
{LINE} { cout << setw(5) << lineno ++ << " " << yytext; }
%%

int main(){
cout << "now processing from standard input \n";
yylex();
return 0;
}