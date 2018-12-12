%{
#include <cstdlib>
#include "calYacc.hpp"

using namespace std;

extern "C" {
   int calwrap() { return 1; }
}

%}


%%

