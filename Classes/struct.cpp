// struct in c++:
// 1. struct is a user defined data type which is used to store multiple data
// types.
// 2. struct is similar to class but the default access specifier is
// public.(members public by default)
// 3. struct members are public by default. whereas class memebers are private
// by default.
// 4. struct is used for passive objects with public access.
// 5. struct cannot have member functions.
// 6. struct cannot have constructors or destructors.
// 7. struct cannot have friend functions.
// 8. struct cannot have static members.
//
// common use of struct is when we want to setup a class that only have direct
// member varibale and we dont need any method in that class.
// eg strcut Point{
//   double x;
//   double y;
//   }

#include <iostream>

class Dog {
public:
  std::string m_name;
};

struct Cat {
public:
  std::string m_name;
};

struct Point {
  double x;
  double y;
};

void print_point(const Point &point) { // const reference is used when we dont
                                       // want to modify the object
  std::cout << "Point [ x: " << point.x << ", y : " << point.y << "]"
            << std::endl;
}

int main() {
  Dog dog1;
  Cat cat1;

  dog1.m_name = "Fluffy"; // Compiler error
  cat1.m_name = "Juny";
  std::cout << dog1.m_name << std::endl;
  std::cout << cat1.m_name << std::endl;

  Point point1;
  point1.x = 10;
  point1.y = 55.5;

  print_point(point1);

  point1.x = 40.4;
  point1.y = 2.7;
  print_point(point1);

  return 0;
}
