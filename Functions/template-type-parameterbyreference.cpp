#include <iostream>

template <typename T> const T &maximum(const T &a, const T &b); // Declaration
// template <typename T> T maximum(T a, T b); // Declaration

int main() {

  double a{23.5};
  double b{51.2};

  std::cout << "Out - &a: " << &a << std::endl; // 0x111abc
  auto result = maximum(a, b);
  std::cout << "Out - &a: " << &a << std::endl; // 0x111abc

  return 0;
}

// Definition
template <typename T> const T &maximum(const T &a, const T &b) {
  std::cout << "In - &a: " << &a << std::endl; // // 0x111abc
  return (a > b) ? a : b;
}

/*
template <typename T> T maximum(T a, T b){
    std::cout << "In - &a: " << &a << std::endl; // // this will be different
address than the adress of a in main function.
    // as we are passing the value of a and not the reference of a.
address return (a > b ) ? a : b ;
}
*/
