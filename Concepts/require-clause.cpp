// the require clause can take in four kinds of arguments:
// 1. Simple requirements
// 2. Nested requirements
// 3. Compound requirements
// 4. Type requirements
//
// Nested requirements are requirements that are nested within other
// requirements. template <typename T> concept TinyType = requires(T a) {
// sizeof(T) <= 4;  // simple requirement only checks if the size of T is less
// than or equal to 4 requires sizeof(T) <= 4; // nested requirement: checks if
// the expression sizeof(T) <= 4 is true
// };
//
// Compound requirements are requirements that are composed of multiple
// requirements.:
//
// template <typename T>
// concept Addable = requires(T a, T b) {
// {a+b} noexcept -> std::convertible_to<T>; //compound requirement
// // checks if the expression a+b is noexcept i.e. valid syntax , doesn't throw
// any exceptions and is convertible to T
// };
//
#include <concepts>
#include <iostream>

template <typename T>
concept TinyType = requires(T a) {
  sizeof(T) <= 4; // simple requirement only checks if the size of T is less
                  // than or equal to 4. only enforces the syntax
  requires sizeof(T) <= 4; // nested requirement: checks if the expression
                           // sizeof(T) <= 4 is true
};

TinyType auto add(TinyType auto a, TinyType auto b) { return a + b; }
int main() {
  std::cout << TinyType<int> << std::endl;
  char x{67}; // size of char is 1 byte
  char y{56}; // size of char is 1 byte i.e less than 4 so it works fine
  //
  // double a{67.0}; // size of double is 8 bytes
  // double b{56.0}; // size of double is 8 bytes , the expression sizeof(T) <=
  // 4 evaluates to false,still the program runs fine as the concept is only
  // enforcing the syntax and not the semantics. it is simple requirement.if we
  // really want to enforce sizeof(T) <= 4 we need to use nested requirement
  // i.e. requires sizeof(T) <= 4. now compilation will fail for add(a,b) .
  add(x, y);
  return 0;
}
