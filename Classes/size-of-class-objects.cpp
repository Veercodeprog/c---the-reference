#include <iostream>
// size of the objects is the sum of the size of the member variables.functions
// are not accounted for the size of the object.
// THIS IS NOT ALWAYS CALLED DUE TO THE BOUNDARY ALIGNMENT.
// boundary alignment ensures that data is stored at memory addresses that are
// multiples of the data's size.
class Dog {
public:
  Dog() = default;
  void prin_info() {}
  void do_something() {}

private:
  size_t leg_count; // 8
  size_t arm_count; // 8
  int *p_age;       // 8
};

int main() {

  Dog dog1;
  std::cout << "sizeof(size_t) : " << sizeof(size_t) << std::endl;
  std::cout << "sizeof(int*) : " << sizeof(int *) << std::endl;
  std::cout << "sizeof(Dog) : " << sizeof(dog1) << std::endl;

  std::string name{"I am the king of the universe!"};

  std::cout << "sizeof(name) : " << sizeof(name) << std::endl;

  return 0;
}
