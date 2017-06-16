#include "sphere.h"
#include "vec.h"
#include "hit.h"

sphere::sphere(const vec &p_pos, const double &p_radius)
 : pos(p_pos), radius(p_radius) { }

bool sphere::hits(const ray &p_ray, hit &p_hit) const {
  return true;
}
