#include "plane.h"
#include "vec.h"
#include "hit.h"

plane::plane(const vec &p_pos, const vec &p_norm)
 : pos(p_pos), norm(p_norm) { }

bool plane::hits(const ray &p_ray, hit &p_hit) const {
  return true;
}
