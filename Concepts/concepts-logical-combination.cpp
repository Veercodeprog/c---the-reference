#include <concepts>
#include <iostream>

template <typename T>
T func(T t)
  requires std::integral<T> && requires(T t) {
    sizeof(T) <= 4;
    requires sizeof(T) <= 4;
  }
{
  std::count << "value: " << t << std::endl;
  return 2 * t;
}

template <typename T>
concept TinyType = requires(T a) {
  sizeof(T) <= 4;
  requires sizeof(T) <= 4;
};

// template <typename T>
//   requires std::integral<T> || std::floating_point<T>
// T add(T a, T b) {
//   return a + b;
// }
//
template <typename T>
  requires std::integral<T> && TinyType<T>
T add(T a, T b) {
  return a + b;
}

int main() {

  std::cout << func(2) << std::endl;
  std::cout << add(2, 3) << std::endl;
  return 0;
}
