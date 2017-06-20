#include "sphere.h"
#include "vec.h"
#include "hit.h"
#include "def.h"
#include <cmath>

sphere::sphere(const vec &p_pos, const double &p_radius)
 : pos(p_pos), radius(p_radius) { }

bool sphere::hits(const ray &p_ray, hit &p_hit) const {
  double t;
  vec temp = p_ray.o - this->pos;
  double a = p_ray.d * p_ray.d;
  double b = 2.0 * temp * p_ray.d;
  double c = temp * temp - this->radius * this->radius;
  double disc = b * b - 4 * a * c;
  if(disc < 0.0)
    return false;
  else {
    double e = sqrt(disc);
    double denom = 2.0 * a;
    t = (-b - e) / denom;
    if(t > EPSILON) {
      p_hit.t = t;
      p_hit.norm = (temp + t * p_ray.d) / this->radius;
      p_hit.pos = p_ray.o + t * p_ray.d;
      return true;
    }
  }
  return false;
}
