#ifndef NURSE_H
#define NURSE_H

#include "person.h"

class Nurse : protected Person {
  friend std::ostream &operator<<(std::ostream &, const Nurse &operand);

public:
  Nurse();
  ~Nurse();

  void treat_patient() {
    m_fullname = "Nurse Jane";
    m_age = 25;
  }

private:
  int practice_certificate_id{0};
};

#endif // NURSE_H
