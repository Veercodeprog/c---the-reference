#include <iostream>

template <typename T> T maximum(T x, T y) { return x > y ? x : y; }

int main(int argc, char **argv) {

  int a{10};
  int b{20};
  double c{34.5};
  double d{45.5};
  std::string e{"A"};
  std::string f{"B"};

  maximum(a, b); // int type deduced
  maximum(c, d); // double type deduced
  maximum(e, f); // string type deduced
  //
  maximum<double>(c, d); // explicitly say that we want the double version
                         // called , if an instance is not there already ,
  // the compiler will generate one for us.
  maximum<double>(a, c); // works even if the parameters are of different types.
  // there is implicit conversion from int to double for the first parameter.
  maximum<double>(a, e); // error: no matching function for call to
                         // 'maximum(int&, std::string&)'
  // cant convert string to double.
  return 0;
}
