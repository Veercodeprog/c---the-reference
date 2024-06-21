
#include "engineer.h"
#include <iostream>

Engineer::Engineer() {}

std::ostream &operator<<(std::ostream &out, const Engineer &engineer) {
  out << "Engineer[Full name : " << engineer.get_fullname()
      << ", Age : " << engineer.get_age()
      << ", Address : " << engineer.get_address()
      << ", Contract Count : " << engineer.contract_count << "]";
  return out;
}

Engineer::~Engineer() { std::cout << "Engineer destructor" << std::endl; }
