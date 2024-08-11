#include <iostream>
#include "functions/calc.hpp"

using namespace std;
using namespace calc;

int main () {
  cout << add(100, 200) << endl;
  cout << subtract(100, 200) << endl;

  return 0;
}
