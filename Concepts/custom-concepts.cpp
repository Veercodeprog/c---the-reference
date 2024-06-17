// building your own concepts
//
// DIFFERENT WAYS TO BUILD YOUR OWN CONCEPTS
//
// 1.)
// template <typename T>
// concept MyIntegral = std::is_integral_v<T>;
//
// 2.)
// template <typename T>
// concept Multiplyable = requires(T a, T b) {
//   {a * b} ;  // we want two parameters to be multiplyable
//
//   }
//
//   3.)
//
//   template <typename T>
//   concept Incrementable = requires(T a) {  // we want passing parameter to be
//   incrementable
//   {++a} -> T;  // we want a to be incrementable
//   {a++} -> T;  // we want a to be incrementable
//   a+=1;  // we want a to be incrementable
//   };
//
//

#include <concepts>
#include <iostream>
#include <type_traits>

template <typename T>
concept MyIntegral = std::is_integral_v<T>;

template <typename T>
  requires MyIntegral<T>
T add(T a, T b) {
  return a + b;
}

int main() {
  int x = 10;
  int y = 20;

  add(x, y);
  return 0;
}
