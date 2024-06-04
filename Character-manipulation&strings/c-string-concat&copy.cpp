/*
 *
 *
 * strcat: strcat appends a copy of the source string to the destination string.
 * strcpy: strcpy copies the source string to the destination string.
 * strcat(str1, str2,n): appends the first n characters of str2 to str1.
 */

#include <iostream>
int main() {
  std::cout << std::endl;
  char *dest1 = new char[30]{'F', 'i', 'r', 'e', 'l', 'o', 'r', 'd', '\0'};
  char *source1 = new char[30]{',', 'T', 'h', 'e', ' ', 'P', 'h', 'e', 'n',
                               'i', 'x', ' ', 'K', 'i', 'n', 'g', '!', '\0'};
  std::cout << "std::strlen(dest1): " << std::strlen(dest1) << std::endl;
  std::cout << "std::strlen(source1): " << std::strlen(source1) << std::endl;
  std::cout << "Concatenating.... : " << std::endl;
  std::strcat(dest1, source1);
  std::cout << "std::strlen(dest1) after concatenation: " << std::strlen(dest1)
            << std::endl;
  std::cout << "dest1: " << dest1 << std::endl;

  // strcpy
  const char *source2 = "Firelord, The Phoenix King!";
  char *dest2 = new char[std::strlen(source2) + 1];
  std::strcpy(dest2, source2);
  std::cout << "dest2: " << dest2 << std::endl;
  std::cout << "std::strlen(dest2): " << std::strlen(dest2) << std::endl;
  std::cout << "sizeof(dest2): " << sizeof(dest2) << std::endl;

  // std::strncpy : Copy n characters from src to dest -
  // signature : char *strncpy( char *dest, const char *src, std::size_t count
  // );
  std::cout << std::endl;
  std::cout << "std::strncpy:" << std::endl;
  const char *source4 = "Hello";
  char dest4[] = {'a', 'b', 'c', 'd',
                  'e', 'f', '\0'}; // Have to put the terminating
                                   // null char if we want to print

  std::cout << "dest4 : " << dest4 << std::endl;

  std::cout << "Copying..." << std::endl;
  std::strncpy(dest4, source4, 5);

  std::cout << "dest4 : " << dest4 << std::endl;

  return 0;
}
