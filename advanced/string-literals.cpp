#include <iostream>

using namespace std;
using namespace std::string_literals; // C++11

int main() {
  const char *cca =
      "Hello, world!"; // C-style string - null-terminated array of const char
  cout << "cca: " << cca << endl;

  string str = "Hello, string!"s;
  cout << "str: " << str << endl;

  cout << "std::string literal: " << "Hello"s + ", world!"s << endl;
}