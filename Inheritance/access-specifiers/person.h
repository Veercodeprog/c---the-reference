#ifndef PERSON_H
#define PERSON_H

#include <string> // for string class
#include <string_view>

class Person {
  friend std::ostream &operator<<(std::ostream &, const Person &person);

public:
  Person() = default;
  Person(const std::string_view fullname, int age, const std::string address);
  ~Person();

  // getters
  std::string get_fullname() const { return m_fullname; }
  int get_age() const {
    return m_age;
  } // const member function: it does not modify the object
  std::string get_address() const { return m_address; }

public:
  std::string m_fullname{"Mysterious Stranger"};

protected:
  int m_age{0};

private:
  std::string m_address{"Unknown"};
};

#endif // !PERSON_H
