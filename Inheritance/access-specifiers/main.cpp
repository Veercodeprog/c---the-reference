#include "engineer.h"
#include "nurse.h"
#include "person.h"
#include "player.h"
#include <iostream>
int main() {
  Person person1("Daniel gray", 25, "blue street down town");
  std::cout << "person1" << person1 << std::endl;
  std::cout << "------------------" << std::endl;

  Player player1;
  player1.m_fullname = "Jo Doe";
  // player.m_age = 55; Compier error because m_age is protected and not
  // accessible outside the class or derived class player.m_address =
  // "2i892317322"; Compiler error because m_address is private
  std::cout << "player1" << player1 << std::endl;
  std::cout << "------------------" << std::endl;
  Nurse nurse1;
  // nurse1.m_full_name = "Davy Johnes";Compiler error // becomes protected
  // nurse1.m_age = 51; // Compiler error // becomes protected

  std::cout << "---------------" << std::endl;

  std::cout << "---------------" << std::endl;
  Engineer engineer1;
  // engineer1.m_full_name = "Olivier Godson"; // Compiler error
  // engineer1.m_age = 55; // Compiler error
  // engineer1.m_address = "dsakfd;aslfjd;laskf"; // Compiler error
  return 0;
}
