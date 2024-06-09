/*
 *
 *  if we use multiple files, we need to include the header file in the main
 * file where we are calling the function. these files are compiled separately
 * and then linked together. This process comprises of three steps:
 *  1. Preprocessing
 *  2. Compilation
 *  3. Linking
 *  The preprocessor takes care of the #include directive and the #define
 *  directive.
 *  The compiler takes care of the code in the source file and generates an
 *  object file.
 *  The linker takes care of linking the object files together to generate an
 *  executable file.
 *  The linker also takes care of linking the library files.
 */

#include "compare.h" // Preprocessor
#include "operations.h"
#include <iostream>

int main() {

  int maximum = max(134, 56);
  std::cout << "max : " << maximum << std::endl;

  int minimum = min(146, 23);
  std::cout << "min : " << minimum << std::endl;

  int x{4}; // 5
  int y{5}; // 6

  int result = incr_mult(x, y);
  std::cout << "result : " << result << std::endl;

  return 0;
}
