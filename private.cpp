#include <iostream>

using namespace std;

class Employee {
public:
  string name;

private:
  double wage;

public:
  double getWage() {
    return wage;
  }
  void setWage(double wage) {
    this->wage = wage;
  }
};

int main() {
  Employee emp1;

  emp1.name = "Paul Smith";
  emp1.setWage(5000);

  cout << "US$" << emp1.getWage() << endl;

  return 0;
}