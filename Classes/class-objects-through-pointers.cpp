// in most cases , we need to manage our class objects through pointers , if we
// are using dynamic memory allocation.
#include "constants.h"
#include "cylinder.h"
#include <iostream>

int main() {
  // Cylinder cylinder1(10,4); // Object
  Cylinder cylinder1(10, 10);
  cylinder1.volume();
  // managing a stack object through a pointer
  Cylinder *p_cylinder1 = &cylinder1;

  // two ways to access the member functions of the class object through pointer
  // both are equivalent

  std::cout << "volume : " << (*p_cylinder1).volume() << std::endl;
  std::cout << "volume : " << p_cylinder1->volume() << std::endl;

  // creating a heap object through a pointer
  Cylinder *p_cylinder2 =
      new Cylinder(20, 20); // space for this object is allocated on the
                            // heap.and we need to release this memory manually.
  std::cout << "volume(cylinder2) : " << p_cylinder2->volume() << std::endl;
  std::cout << "base_radius(cylinder2) : " << p_cylinder2->get_base_radius()
            << std::endl;
  delete p_cylinder2; // releasing the memory allocated on the heap when we are
                      // done with it.
  return 0;
}
