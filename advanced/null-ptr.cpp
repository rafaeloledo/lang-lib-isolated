#include <cstddef>
#include <iostream>

using namespace std;

void func(int i) { cout << "func(int i)" << endl; }

void func(int *i) { cout << "func(int *i)" << endl; }

int main () {
  // func(NULL);
  func(nullptr);
}