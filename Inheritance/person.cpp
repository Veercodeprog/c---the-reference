#include "person.h"

Person::Person() {}

Person::Person(std::string &first_name_param, std::string &last_name_param)
    : first_name{first_name_param}, last_name{last_name_param} {
} // after : is the initializer list for the constructor
// the initializer list is used to initialize the data members of the class
// the initializer list is placed after the constructor's parameter list and
// before the body of the constructor the initializer list is a comma separated
// list of data members of the class followed by their initial values in braces

std::ostream &operator<<(std::ostream &out, const Person &person) {
  out << "Person [first_name=" << person.first_name
      << ", last_name=" << person.last_name << "]";
  return out;
}

Person::~Person() {}
