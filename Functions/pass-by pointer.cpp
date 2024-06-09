#include <iostream>

void say_age(int *age); // Declaration

int main() {
  // as we are passing the address of the variable, the value of the original
  // variable will be changed. as the function expects *age i.e.pointer to the
  // variable and we are pasiing &age i.e. address of the variable this passes
  // the original variable to the function and the value of the original
  // variable will be changed.
  int age{23}; // Local
  std::cout << "age (before call) : " << age << "&age : " << &age
            << std::endl; // 23
  say_age(&age);          // Argument
  std::cout << "age (after call) : " << age << "&age : " << &age
            << std::endl; // 24

  return 0;
}

void say_age(int *age) { // Parameter
  ++(*age);
  std::cout << "Hello , you are " << *age << " years old! &age : " << &age
            << std::endl; // 24
}
