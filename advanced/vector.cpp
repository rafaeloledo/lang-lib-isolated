#include <iostream>
#include <vector>

void print (const std::vector<int>& vec) {
  std::cout << "{";
  for (auto i = 0; i < vec.size(); ++i) {
    std::cout << vec[i];
    if (i < vec.size() - 1) {
      std::cout << ", ";
    }
  }
  std::cout << "}" << std::endl;
}

int main() {
  using namespace std;
  int x{7};
  string s{"Let us begin"};

  cout << "x = " << x << endl;
  cout << "s = \"" << s << "\"" << endl;

  vector<int> vec{1, 2, 3, 4, 5};

  cout << "vec = ";
  print(vec);
}