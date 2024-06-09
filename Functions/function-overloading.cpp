/*
 * function overloading in c++:
 * 1. Function overloading is a feature in C++ where two or more functions
 * can have the same name but different parameters.
 * 2. Function overloading can be considered as an example of polymorphism
 * feature in C++.
 */

#include <iostream>

int max(int x, int y) {
  std::cout << "int overload called" << std::endl;
  return x > y ? x : y;
}

/*
//cant overload function based on return type.compiler error as both max
functions
//have same name and same parameters i.e. same signature.
double max(int x, int y) {
  return x > y ? x : y;
}
*/

int max(double x, double y) {
  std::cout << "double overload called" << std::endl;
  return x > y ? x : y;
}

double max(int x, double y) {
  std::cout << "double overload called" << std::endl;
  return x > y ? x : y;
}
std::string_view max(std::string_view x, std::string_view y) {
  std::cout << "string_view overload called" << std::endl;
  return x > y ? x : y;
}

int main() {

  int x{10};
  int y{20};
  double a{10.5};
  double b{20.5};
  auto result = max(x, y);
  auto result1 = max(a, b);
  max("hello", "world");
  return 0;
}
