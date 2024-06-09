/*
 *
 * function in c++: function is a group of statements that together perform a
 * task i.e.
 * *  takes some input and return some output.
 *
 *  return_type function_name(param1, param2, param3, ....) {
 *                             // function body
 *                             // statements
 *                             // return statement
 *                            //   return value;
 *                           //  }
 */

#include <iostream>

// the prototype of the function needs to be declared before the main
// function.otherwise the compiler will not be able to find the function.

int main() {
  // function declaration
  void print_message();
  // function call
  print_message();
  return 0;
}

// argument scopes in function

// parameters passed this way are scoped locally in the function.
// changes to them are not visible outside the function.
// what we have inside the function are the COPIES of the arguments passed in
// the function.
double increment_multiply(double a, double b) {
  std::cout << "inside function : before increment a: " << a << std::endl;
  std::cout << "inside function : before increment b: " << b << std::endl;
  double result = (++a) * (++b);
  std::cout << "inside function : after increment a: " << a << std::endl;
  std::cout << "inside function : after increment b: " << b << std::endl;

  return result;
}
