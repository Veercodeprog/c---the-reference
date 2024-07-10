/*
pointers in c++:
pointers are variables that store the memory address of another variable
all pointers are of a specific type and same size

*/

#include <iostream>
int main() {
  int int_var{43};
  int *p_int_var{&int_var};

  std::cout << "int_var: " << int_var << std::endl;
  std::cout << "p_int_var(Address in memory): " << p_int_var << std::endl; //
  std::cout << "p_int_var(Value stored at the address): " << *p_int_var
            << std::endl;
  std::cout << "&int_var: " << &int_var << std::endl;
  // you can also change the address stored in a pointer at any time

  int int_var1{65};

  int_var1 = 126;

  p_int_var = &int_var1;
  std::cout << "p_int_var(with different address): " << p_int_var << std::endl;

  // pointers only store the type of the variable they are pointing to or for
  // which it is declared
  int *p_int1{nullptr}; // nullptr is a c++11 feature
  double double_var{3.14};
  // p_int1 = &double_var; // this will give an error

  int *p_number{}; // will intialize the pointer to nullptr
  double *p_fractional_number{};

  // explicitly intializing pointers to nullptr
  int *p_number1{nullptr};
  int *p_fractional_number1{nullptr};

  std::cout << "size of (int) :" << sizeof(int) << std::endl;
  std::cout << "size of (double) :" << sizeof(double) << std::endl;
  std::cout << "size of (double*) :" << sizeof(double *) << std::endl;
  std::cout << "size of (int*) :" << sizeof(int *) << std::endl;
  std::cout << "size of (p_number1) :" << sizeof(p_number1) << std::endl;
  std::cout << "size of (p_fractional_number1) :"
            << sizeof(p_fractional_number1) << std::endl;

  return 0;
}
