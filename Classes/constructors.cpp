// constructor:
// it's convenient sometimes if an object can initialize itself when it's first
// created, without requiring a separate call to member function. This is the
// job of a constructor. A constructor is a member function that is
// automatically called when an object is created. The constructor has the same
// name as the class and no return type. The constructor can have parameters,
// but the parameters must have default values.
//
// basically a special kind of method  that is called when an instance of a
// class is created is called constructor. same name as the class. no return
// type. can have parameters, but the parameters must have default values.
// usually used to initialize the member variables of the class.
//
#include <iostream>
const double PI{3.1415926535897932384626433832795};
class Cylinder {
public:
  Cylinder() {
    base_radius = 2.0;
    height = 3.0;
  }
  Cylinder(double rad_param, double height_param) {
    base_radius = rad_param;
    height = height_param;
  }
  double volume() { return PI * base_radius * base_radius * height; }

private:
  double base_radius{1};
  double height{1};
};

int main() {
  // Cylinder cylinder1(10,4); // Object

  Cylinder cylinder1;
  std::cout << "volume : " << cylinder1.volume() << std::endl;
  return 0;
}
