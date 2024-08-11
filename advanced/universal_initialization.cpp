#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(const vector<int>& v) {
  for (auto i : v) {
      cout << i << " ";
  }
  cout << endl;
}

class Test {};

int main() {
  int y = 7.7;
  // int y{7.7};

  cout << "y = " << y << endl;

  vector<int> old_one(4);
  vector<int> old_two(4, 2);
  vector<int> uni_one{4};
  vector<int> uni_two{4, 2};

  cout << "old_one: ";
  print(old_one);
  cout << "old_two: ";
  print(old_two);
  cout << "uni_one: ";
  print(uni_one);
  cout << "uni_two: ";
  print(uni_two);

  // Test test();
  Test test{};
}