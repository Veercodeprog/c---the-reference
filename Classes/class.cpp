// class in c++:
// class is a user defined data type which is a collection of data members and
// member functions. data members are the data variables and member functions
// are the functions that are used to manipulate these data members. class is a
// blueprint for the objects.
//
// class member variables can wither be raw stack variables or pointers to heap.
// members cant be references.
// class methods have access to the member variables of the class,regardless of
// whether they are public or private. private members of a class are not
// accessible from outside the class.

#include <iostream>
using namespace std;

const double PI{3.1415926535897932384626433832795};

class Cylinder {
public: // i we don't specify the access specifier, it is private by default
  double base_radius{1};
  double height{1};

public:
  double volume() { return PI * base_radius * base_radius * height; }
};
int main() {

  Cylinder cylinder1;
  cout << "Volume of cylinder1: " << cylinder1.volume() << endl;

  cylinder1.base_radius = 10;
  cylinder1.height = 3;

  cout << "Volume of cylinder1: " << cylinder1.volume() << endl;
  return 0;
}
