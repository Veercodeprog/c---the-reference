#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string> // for string class

class Person {
  friend std::ostream &operator<<(std::ostream &out,
                                  const Person &person); // friend function
public:
  Person(); // default constructor
  Person(std::string &first_name_param,
         std::string &last_name_param); // parameterized constructor
  ~Person();                            // destructor
                                        // getters
  std::string get_first_name() const { return first_name; }
  std::string get_last_name() const { return last_name; }
  // setters
  void set_first_name(std::string fn) { first_name = fn; }
  void set_last_name(std::string ln) { last_name = ln; }

  // protected members are accessible to derived classes but not to the outside
  // world.
protected:
  std::string first_name{"Mysterious"};
  std::string last_name{"Stranger"};
};

#endif
