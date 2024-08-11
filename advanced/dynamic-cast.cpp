#include <iostream>

class Base {
public:
  virtual void foo() { std::cout << "Base::foo()\n"; }
};

class Derived : public Base {
public:
  void foo() override { std::cout << "Derived::foo()\n"; }
};

int main() {
  Base* base = new Derived();
  base->foo();  // Output: Derived::foo()

  Derived* derived = dynamic_cast<Derived*>(base);
  if (derived) {
    derived->foo();  // Output: Derived::foo()
  } else {
    std::cout << "dynamic_cast failed\n";
  }

  delete base;
  return 0;
}
