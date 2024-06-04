/*
 *
 * one definition rule:  In C++, you can have only one definition .
 * in a program. If you define a variable more than once, the compiler will give
 * you an error.
 *
 * one definition rule: context
 * 1). free standing variables
 * 2.) functions
 * 3.) class member functions
 *
 * 4.) class static member  variables
 *
 * exception: for classes as we can have multiple definition of classes but
 * definition have to show in different translation unit.
 *
 */

#include "person.h"
#include <iostream>
// classes example for one definition rule
double x{};

struct Point {
  double m_x;
  double m_y;
};

int Person::person_count = 8;

// Person::Person(const std::string &names_param, int age_param)
//     : full_name(names_param), age(age_param) {
//   ++person_count;
// }

int main() {
  std::cout << x << std::endl;

  return 0;
}
