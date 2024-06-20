#ifndef CYLINDER_H
#define CYLINDER_H // guard checks if the file has been included before and if
                   // so, it skips the rest of the file

#include "constants.h"
class Cylinder {
public:
  Cylinder() {
    base_radius = 2.0;
    height = 3.0;
  }
  Cylinder(double rad_param, double height_param);

  double volume();
  double get_base_radius();
  double get_height();
  void set_base_radius(double rad_param);
  void set_height(double height_param);

private:
  double base_radius{1};
  double height{1};
};

#endif
