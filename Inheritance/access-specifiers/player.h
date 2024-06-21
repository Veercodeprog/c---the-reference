#ifndef PLAYER_H
#define PLAYER_H

#include "person.h"

class Player : public Person {
  friend std::ostream &operator<<(std::ostream &os, const Player &player);

public:
  Player();
  ~Player();

  void play() {

    m_fullname = "john snow";
    m_age = 30;
    // m_address = "winterfell"; //private member of parent class unaccessible
  }

private:
  int m_carrer_start_year;
  double m_salary{0.0};
  int health_factor{0};
};

#endif
