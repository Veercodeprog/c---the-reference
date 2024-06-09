/*
* a mechanism to set up anonymous functions without names in c++ using lambda
functions. Once we set them , we can either give them names and call them , or
we can even get them executed directly.

* Syntax:
[ capture clause ] (parameters) -> return-type
{
   // fucntion body or definition of method
}
*
* calling lambda function directly after definition
[] (int x, int y) -> int { return x + y; } (10, 20);

we can also use the lambda fucntion directly in std::cout or any other function.

*/

#include <iostream>
int main() {
  auto func = []() { std::cout << "Hello World" << std::endl; };
  func();

  [](int x, int y) -> int {
    std::cout << " x + y :" << (x + y) << std::endl;
  }(10, 20);

  //[] denotes the capture clause or list, which is used to capture the
  // variables and parameters from the outer scope.
  //

  // capturing by value
  int c{42};

  auto func1 = [c]() {
    std::cout << "Value of c is : " << c << std::endl;
    std::cout << "address of inner c is : " << &c << std::endl;
  };
  for (size_t i{}; i < 5; i++) {
    std::cout << "Outer value of c is : " << c << std::endl;
    std::cout << "address of outer c is : " << &c << std::endl;
    func1();
    ++c;
  }

  // capturing by reference
  int d{42};
  auto func2 = [&d]() {
    std::cout << "Value of d is : " << d << std::endl;
    std::cout << "address of inner d is : " << &d << std::endl;
  };

  for (size_t i{}; i < 5; i++) {
    std::cout << "Outer value of d is : " << d << std::endl;
    std::cout << "address of outer d is : " << &d << std::endl;
    func2();
    ++d;
  }

  // we can capture all values by using = sign in capture clause
  //
  int e{42};
  auto func3 = [=]() {
    std::cout << "Value of e is : " << e << std::endl;
    std::cout << "address of inner e is : " << &e << std::endl;
  };
  for (size_t i{}; i < 5; i++) {
    std::cout << "Outer value of e is : " << e << std::endl;
    std::cout << "address of outer e is : " << &e << std::endl;
    func3();
    ++e;
  }

  // capture all values by reference using &

  int f{42};
  auto func4 = [&]() {
    std::cout << "Value of f is : " << f << std::endl;
    std::cout << "address of inner f is : " << &f << std::endl;
  };
  for (size_t i{}; i < 5; i++) {
    std::cout << "Outer value of f is : " << f << std::endl;
    std::cout << "address of outer f is : " << &f << std::endl;
    func4();
    ++f;
  }

  return 0;
}
