#include <iostream>

using namespace std;

class Person {
public:
  string name;
  Person(string name) : name(name) {
    cout << "Hello, my name is " << name << endl;
  }

  ~Person() {
    cout << name << " saying goodbye!" << endl;
  }
};

int main() {

  Person p1("Peter");

  {
    Person p2{"Mary"};
    Person p3 = {"John"};
    Person p4 = Person("May");
  }

  cout << "End of code !" << endl;
  
  return 0;
}