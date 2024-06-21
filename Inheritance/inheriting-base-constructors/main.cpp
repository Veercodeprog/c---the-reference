// copy constructors are not inherited
//
// inherited constructors are base constructors .They have no knowledge of the
// derived class.any memeber from the derived class will just contain junk or
// whatever default value it's initialized with.
//
// constructors are inherited with whatever access specifier they have in the
// base class.
//
// inheriting constructors add a level of confusion to the code,its not clear
// which constructor is being called.It is recommended to avoid them and only
// use this feature if no other option is available.

#include "engineer.h"
#include "person.h"
#include <iostream>

int main() {

  Engineer eng1("Daniel Gray", 23,
                "asdl;fkjdas;fkdas;fk"); // no constructor for engineer but this
                                         // constructor is called as we are
                                         // inheriting the person constructor in
                                         // engineer and engineer constructor is
                                         // taking same argumenets as enginere.
  std::cout << "eng1 : " << eng1 << std::endl;

  // after creating a engineer constructor that also takes 4th parameter
  Engineer eng2("Daniel Gray", 23, "asdl;fkjdas;fkdas;fk", 4);
  std::cout << "eng2 : " << eng2 << std::endl;
  return 0;
}
