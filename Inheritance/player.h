//
#ifndef PLAYER_H
#define PLAYER_H

#include "person.h"
#include <iostream>
#include <string> // for string class
#include <string_view>
// we cant access the private members of the base class directly from the
// derived//

// for public inheritance , public members of the base class become public in
// the derived class, protected members of the base class become protected in
// the derived class
// protected inheritance, public members of the base class become protected in
// the derived class, protected members of the base class become protected in
// the derived class,
//  private inheritance, public members of the base class become private in the
// derived class, protected members of the base class become private in the
// derived class,
// private mmembers of the base class are not accessible in the derived class
// regardless of the access specifier used in the inheritance.
class Player : public Person {
  friend std::ostream &operator<<(std::ostream &out, const Player &player);

public:
  Player() = default;
  Player(std::string_view game_param, std::string_view first_name_param,
         std::string_view last_name_param);

private:
  std::string m_game{"None"};
};

#endif // !PLAYER_H
