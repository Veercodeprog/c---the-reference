#include "civilengineer.h"
#include "engineer.h"
#include "person.h"
#include <iostream>

CivilEngineer::CivilEngineer() {}

std::ostream &operator<<(std::ostream &out,
                         const CivilEngineer &civil_engineer) {
  // private members of parent class are not accessible
  // out << "Civil Engineer [Full name : " << civil_engineer.get_fullname()
  //     << ",age : " << civil_engineer.get_age()
  //     << ",address : " << civil_engineer.get_address()
  //     << ",contract_count : " << civil_engineer.contract_count
  //     << ",speciality : " << civil_engineer.m_speciality << "]";
  return out;
}
