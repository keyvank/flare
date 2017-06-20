#include "plane.h"
#include "vec.h"
#include "hit.h"
#include "def.h"


plane::plane(const vec &p_pos, const vec &p_norm)
 : pos(p_pos), norm(p_norm) { }

bool plane::hits(const ray &p_ray, hit &p_hit) const {
  double t = (this->pos - p_ray.o) * this->norm / (p_ray.d * this->norm);
  if(t > EPSILON) {
    p_hit.t = t;
    p_hit.norm = this->norm;
    p_hit.pos = p_ray.o + t * p_ray.d;
    return true;
  } else {
    return false;
  }
}
