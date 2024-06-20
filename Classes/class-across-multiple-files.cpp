#include "constants.h"
#include "cylinder.h"
#include <iostream>
// move PI to constants.h file

int main() {
  // Cylinder cylinder1(10,4); // Object

  Cylinder cylinder1;
  std::cout << "volume : " << cylinder1.volume() << std::endl;
  return 0;
}
