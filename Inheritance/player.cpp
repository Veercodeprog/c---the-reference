#include "player.h"
#include "person.h"
#include <string>
#include <string_view>
Player::Player(std::string_view game_param, std::string_view first_name_param,
               std::string_view last_name_param) {
  m_game = game_param;
  first_name = first_name_param;
  last_name = last_name_param;
}

std::ostream &
operator<<(std::ostream &out,
           const Player &player) { // ostream is a class in the iostream library
                                   // used to output data to the console
  out << "Player : [ game : " << player.m_game
      << "names : " << player.get_first_name() << player.get_last_name() << "]";
  return out;
}
