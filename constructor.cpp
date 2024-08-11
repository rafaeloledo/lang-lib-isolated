#include <iostream>
#include <sstream>

using namespace std;

class Date {
  public:
    int day, month, year;

  Date(int day = 1, int month = 1, int year = 1970)
    : day(day), month(month), year(year) {}

  string toString() {
    stringstream s;

    s << day << "/" << month << "/" << year;

    return s.str();
  }
};

int main () {
  Date d1 = Date(1, 1, 1970);

  Date d2;

  cout << d1.toString() << endl;
  cout << d2.toString() << endl;

  return 0;
}
