#include <iostream>

int main () {
  std::cout << "Enter the radius: ";

  const double PI = 3.1425;

  double radius;

  std::cin >> radius;
  
  double area = PI * radius * radius;

  std::cout << "The area is: " << area;
  
  return 0;
}
