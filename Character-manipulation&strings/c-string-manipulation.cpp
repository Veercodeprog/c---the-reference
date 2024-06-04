/*
 * differnce b/w strchr and strrchr
 *
 * strchr: strchr finds the first occurrence of a character in a string.
 * strrchr: strrchr finds the last occurrence of a character in a string.
 * strchr: strchr returns a pointer to the first occurrence of the character in
 * the string. strrchr: strrchr returns a pointer to the last occurrence of the
 * character in the string. strchr: strchr returns nullptr if the character is
 * not found. strrchr: strrchr returns nullptr if the character is not found.
 * strchr: strchr searches from the beginning of the string.
 * strrchr: strrchr searches from the end of the string.
 * strchr: strchr is case-sensitive.
 * strrchr: strrchr is case-sensitive.
 */

#include <iostream>
int main() {
  // std::strlen :Find the length of a string
  std::cout << "std::strlen" << std::endl;
  const char message1[]{"The sky is blue"};
  // Array decays into a pointer
  const char *message2{"The sun is blue"};
  std::cout << "The length of the message1 is: " << std::strlen(message1)
            << std::endl;
  std::cout << "The length of the message1 is: " << sizeof(message1)
            << std::endl;
  std::cout << message2 << std::endl;
  std::cout << std::endl;
  std::cout << "The length of the message2 is: " << std::strlen(message2)
            << std::endl;
  std::cout << "The length of the message2 is: " << sizeof(message2)
            << std::endl;
  // find first occurernce of a character in a string
  std::cout << "std::strchr" << std::endl;
  const char *str{"Try not. Do, or do not. There is no try."};
  char target{'T'};
  const char *result{str};
  int iterations{};
  std::cout << "*result :" << *result << std::endl;
  std::cout << "result :" << result << std::endl;
  while ((result = std::strchr(result, target)) != nullptr) {
    std::cout << "Found '" << target << "' starting at '" << result
              << "' at index '" << (result - str) << "'\n";
    ++iterations;
    ++result;
  }
  std::cout << "Found " << target << " " << iterations << " times\n";

  // find last occurrence of a character in a string
  std::cout << "std::strrchr" << std::endl;
  char input[] = "/home/user/hello.cpp";
  char *output = std::strrchr(input, '/');
  std::cout << "output: " << output << std::endl;
  std::cout << "*output: " << output << std::endl;
  if (output != nullptr) {
    std::cout << "The last occurrence of '/' is at index " << (output - input)
              << std::endl;
  } else {
    std::cout << "Character not found" << std::endl;
  }
  return 0;
}
