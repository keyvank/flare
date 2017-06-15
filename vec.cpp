#include "vec.h"
#include <iostream>

vec::vec(): x(0), y(0), z(0) { }

vec::vec(const double &p_v): x(p_v), y(p_v), z(p_v) { }

vec::vec(const double &p_x, const double &p_y, const double &p_z):
  x(p_x), y(p_y), z(p_z) { }

std::ostream &operator<<(std::ostream &out, const vec &p_vec) {
  out << "(" << p_vec.x << ", " << p_vec.y << ", " << p_vec.z << ")";
}
