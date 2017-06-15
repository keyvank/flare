#include "vec.h"
#include "ray.h"
#include <iostream>

ray::ray(const vec &p_o, const vec &p_d):
  o(p_o), d(p_d) { }

std::ostream &operator<<(std::ostream &out, const ray &p_ray) {
  out << "[" << p_ray.o << ", " << p_ray.d << "]";
}
