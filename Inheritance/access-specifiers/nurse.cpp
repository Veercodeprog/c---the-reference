#include "nurse.h"
#include "person.h"
#include <iostream>

Nurse::Nurse() {}

std::ostream &operator<<(std::ostream &out, const Nurse &nurse) {
  out << "Nurse[Full name : " << nurse.get_fullname()
      << ", Age : " << nurse.get_age() << ", Address : " << nurse.get_address()
      << ", Practice Certificate ID : " << nurse.practice_certificate_id << "]";
  return out;
}

Nurse::~Nurse() { std::cout << "Nurse destructor" << std::endl; }
