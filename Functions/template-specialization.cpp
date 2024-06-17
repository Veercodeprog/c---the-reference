

#include <cstring>
#include <iostream>

template <typename T> T maximum(T a, T b) { return (a > b) ? a : b; }

// if we dont define the specialized template then the answer of the
// program is animal, which is lexically smaller than wild.
template <>
const char *
maximum<const char *>(const char *a,
                      const char *b) { // explicit template specialization or
                                       // argument we passed after the
  // function name is the type of the template we are specializing.

  return (std::strcmp(a, b) > 0) ? a : b;
}

int main() {

  /*
      int a{10};
      int b{23};
      double c{34.7};
      double d{23.4};
      std::string e{"hello"};
      std::string f{"world"};

      auto max_int = maximum(a,b); // int type deduced
      auto max_double = maximum(c,d);// double type deduced
      auto max_str = maximum(e,f) ;// string type deduced

      std::cout << "max_int : " << max_int << std::endl;
      std::cout << "max_double : " << max_double << std::endl;
      std::cout << "max_str : " << max_str << std::endl;
  */

  //
  const char *g{"wild"};
  const char *h{"animal"};

  // This won't do what you would expect : BEWARE!

  const char *result = maximum(g, h);
  std::cout << "max(const char*) : " << result << std::endl;

  return 0;
}
