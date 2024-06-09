/*
 * pass by value in c++: in c++ we can pass the arguments to the function in
 * three ways:
 * 1. pass by value
 * 2. pass by reference
 * 3. pass by pointer
 *
 * pass by value: in this method, the arguments are passed to the function by
 * value. the changes made to the arguments inside the function are not visible
 * outside the function. the arguments are copied to the function parameters.
 * the changes made to the parameters inside the function are not reflected
 *
 * pass by reference: in this method, the arguments are passed to the function
 * by reference. the changes made to the arguments inside the function are
 * visible outside the function. the arguments are not copied to the function
 * parameters. the changes made to the parameters inside the function are
 * reflected.
 *
 * pass by pointer: in this method, the arguments are passed to the function by
 * pointer. the changes made to the arguments inside the function are visible
 * outside the function. the arguments are not copied to the function
 * parameters. the changes made to the parameters inside the function are
 * reflected.
 *
 */

#include <iostream>

void say_age(int age) { // Parameter
  ++age;
  std::cout << "Hello , you are " << age << " years old! &age : " << &age
            << std::endl;
}

int main() {

  // pass by value:

  int age{23}; // Local
  std::cout << "age (before call) : " << age << "&age : " << &age << std::endl;
  say_age(age); // Argument
  std::cout << "age (after call) : " << age << "&age : " << &age << std::endl;

  return 0;
}
