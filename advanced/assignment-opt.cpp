#include <iostream>

class Test {
  int i;
  std::string str;

public:
  int getI() const { return i; }
  std::string getStr() const { return str; }
  Test(int i, std::string str) : i(i), str(str) {}
  Test &operator=(const Test &t) {
    std::cout << "operator=" << std::endl;
    i = t.i;
    str = t.str;
    return *this;
  }
};

int main() {
  Test t1(1, "one");
  Test t2(2, "two");
  t2 = t1;

  std::cout << t1.getI() << " " << t1.getStr() << std::endl;

  return 0;
}