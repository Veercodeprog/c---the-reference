// Concepts:
//  1. Concepts are a feature of C++20 that allow you to constrain templates
//  based on a set of requirements. Concepts are basically a mechanism to place
//  constraints on your template type parameters.
//  2. Concepts are a way to specify requirements on template arguments.
//  two types of concepts:
//  1. standard built-in concepts
//  2. user-defined concepts or custom concepts
//
//  built in concepts:
//  1. same_as: checks if two types are the same.
//  2. derived_from: checks if one type is derived from another.
//  3. convertible_to: checks if one type can be converted to another.
//  4. common_with: checks if two types have a common type.
//  5. common_reference_with: checks if two types have a common reference type.
//  6. integral: checks if a type is an integral type.
//  7. signed_integral: checks if a type is a signed integral type.
//  8. unsigned_integral: checks if a type is an unsigned integral type.
//  9. floating_point: checks if a type is a floating point type.
//
//  template <typename T>
//  requires std::integral<T> // requires clause
//  T add(T a, T b) {
//   return a + b;
//   }
//
//   function template can only work if the concept satisfies the requirements.
//
//   char a{10};
//   char b{20};
//   auto result = add(a, b); // works fine
//   std::cout << "result : " << static_cast<int(result) << std::endl;
//
//   int c{12};
//   int d{23};
//   auto result1 = add(c, d);
//   std::cout << "result1 : " << result1 << std::endl;
//
//   double e{12.5};
//   double f{23.5};
//   auto result2 = add(e, f); // Error : double is not an integral type.
//
//
//   Differnt syntax for concepts:
//
//   syntax :
//   template <typename T>
//   requires std::integral<T>
//   T add(T a, T b) {
//   return a + b;
//   }
//
//   syntax 1:
//   using type traits
//   template <typename T>
//   requires std::is_integral_v<T>  //using type traits
//   T add(T a, T b) {
//   return a + b;
//   }
//
//  syntax 2:
//  template <std::integral T>
//  T add(T a, T b) {
//  return a + b;
//  }
//
//  syntax 3:
//  auto add (std::integral auto a, std::integral auto b) {
//  return a + b;
//      }
//
//  syntax 4:
//  template <typename T>
//  T add(T a, T b) requires std::integral<T> {
//  return a + b;
//  }
//
//
//
#include <concepts>
#include <iostream>
template <typename T>
T add(T a, T b)
  requires std::integral<T>
{
  return a + b;
}

int main() {

  char a_0{10};
  char a_1{20};

  auto result_a = add(a_0, a_1);
  std::cout << "result_a : " << static_cast<int>(result_a) << std::endl;

  int b_0{11};
  int b_1{5};
  auto result_b = add(b_0, b_1);
  std::cout << "result_b : " << result_b << std::endl;

  double c_0{11.1};
  double c_1{1.9};
  // auto result_c = add(c_0, c_1);  // c_o and c_1 are not integral types.
  // std::cout << "result_c : " << result_c << std::endl;

  return 0;
}
