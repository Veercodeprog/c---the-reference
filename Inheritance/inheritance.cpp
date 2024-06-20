// inheritance in c++:
// Inheritance is the process by which one class acquires the properties and
// behavior of another class. The class that is inherited is called the base
// class, and the class that inherits those properties is called the derived
// class. Inheritance is done by using a colon(:) followed by the access
// specifier. Types of inheritance:
// 1. Single inheritance
// 2. Multiple inheritance
// 3. Multilevel inheritance
// 4. Hierarchical inheritance
// 5. Hybrid inheritance
// 6. Multipath inheritance
//
// with public inheritance:derived classes  can access and use public members of
// base class, but the derives class cant directly access the private members of
// base class.
// the same applies to the friends of the derived class.They have access to the
// private members of the derived class but not to the private members of the
// base class.

#include "player.h"
#include <iostream>
#include <string> // for string class
int main() {
  Player p1("Basketball", "John", "Doe");
  std::cout << "player : " << p1 << std::endl;
  return 0;
}
