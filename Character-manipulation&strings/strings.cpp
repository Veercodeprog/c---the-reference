/*
 *isalpha(c) - returns true if c is a letter
 *isdigit(c) - returns true if c is a digit
 *isalnum(c) - returns true if c is a letter or a digit
 *islower(c) - returns true if c is a lowercase letter
 *isupper(c) - returns true if c is an uppercase letter
 *tolower(c) - returns the lowercase equivalent of c
 *toupper(c) - returns the uppercase equivalent of c
 *isspace(c) - returns true if c is a whitespace character
 *iscntrl(c) - returns true if c is a control character
 *ispunct(c) - returns true if c is a punctuation character
 *isprint(c) - returns true if c is a printable character
 *isgraph(c) - returns true if c is a character with a visible representation
 *isxdigit(c) - returns true if c is a hexadecimal digit
 *isblank(c) - returns true if c is a blank character
 *iscntrl(c) - returns true if c is a control character
 *
 */

#include <iostream>

int main() {

  // check if  character is lowercase / uppercase
  std::cout << " std::islower and std::isupper" << std::endl;
  std::cout << std::endl;
  char thought[]{
      "The c++ programming language is the most used language in the world"};
  int lowercase_count{0};
  int uppercase_count{0};

  std::cout << "The original string is: " << thought << std::endl;

  for (auto character : thought) {
    if (std::islower(character)) {
      ++lowercase_count;
    }
    if (std::isupper(character)) {
      ++uppercase_count;
    }
  }
  std::cout << "The number of lowercase characters in the string is: "
            << lowercase_count << std::endl;
  std::cout << "The number of uppercase characters in the string is: "
            << uppercase_count << std::endl;

  // turn characters to lowercase / uppercase
  //
  std::cout << "std:tolower and  std::toupper" << std::endl;
  char original_string[]{
      "Home. The feeling of home is the best feeling in the world"};
  char destination_string[sizeof(original_string)]{};
  for (size_t i{}; i < sizeof(original_string); ++i) {
    destination_string[i] = std::toupper(original_string[i]);
  }

  std::cout << "The original string is: " << original_string << std::endl;
  std::cout << "The destination string is: " << destination_string << std::endl;

  for (size_t i{}; i < sizeof(original_string); ++i) {
    destination_string[i] = std::tolower(original_string[i]);
  }
  std::cout << "The original string is : " << original_string << std::endl;
  std::cout << "The destination string is : " << destination_string
            << std::endl;

  // check if a character is blank

  std::cout << "std::isblank" << std::endl;
  char sentence[]{"The quick brown fox jumps over the lazy dog"};
  std::cout << "The original string is: " << sentence << std::endl;
  int blank_count{0};

  for (size_t i{}; i < sizeof(sentence); ++i) {
    if (std::isblank(sentence[i])) {
      ++blank_count;
    }
  }
  std::cout << "The number of blank characters in the string is: "
            << blank_count << std::endl;
  return 0;
}
