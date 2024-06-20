// setters and getters
// methods are used to set and get the values of private member variables.
// methods to read and modify member variables are called getters and setters.
//
// whats the benefit of using setters and getters over public member variables?
// 1. You can control the access to the member variables.
// 2. You can add validation logic to the setter methods.
// 3. You can add logging and error handling to the setter methods.
// 4. You can change the implementation of the getter and setter methods without
// changing the class interface.
// 5. You can make the class thread-safe
// 6. You can make the class more maintainable and readable.
#include <iostream>
class Cylinder {

private:
  double base_radius{1.0};
  double height{1.0};

public:
  double get_base_radius() { return base_radius; }

  double get_height() { return height; }

  void set_base_radius(double rad_param) { base_radius = rad_param; }
  void set_height(double height_param) { height = height_param; }
};

int main() {
  std::cout << "Setters and Getters" << std::endl;
  Cylinder cylinder1;
  std::cout << "base_radius : " << cylinder1.get_base_radius() << std::endl;:w

    return 0;
}
