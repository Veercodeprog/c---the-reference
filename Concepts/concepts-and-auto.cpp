// constraints declared into variable
// std::integral auto x = add(2, 3);
//
#include <concepts>
#include <iostream>
std::integral auto add(std::integral auto a, std::integral auto b) {
  return a + b;
}
int main() {
  //   add(10.9, 20.9); // compiler error as add parameters supports integral
  //   types only
  std::integral auto x = add(2, 3);
  std::floating_point auto y =
      add(11, 20); // will fail as y expects floating point
  return 0;
}
