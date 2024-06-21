#include "player.h"
#include "person.h"
#include <iostream>

Player::Player() { std::cout << "Player constructor" << std::endl; }

std::ostream &operator<<(std::ostream &out, const Player &player) {
  out << "Player[Full name : " << player.get_fullname()
      << ", Age : " << player.get_age()
      << ", Address : " << player.get_address() << "]";
  return out;
}

Player::~Player() { std::cout << "Player destructor" << std::endl; }
