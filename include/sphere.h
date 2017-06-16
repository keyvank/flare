#ifndef __SPHERE__
#define __SPHERE__

#include "vec.h"
#include "ray.h"
#include "hit.h"
#include "obj.h"

class sphere : public obj {
public:

  vec pos;
  double radius;

  virtual bool hits(const ray &p_ray, hit &p_hit) const;

  sphere() = delete;
  sphere(const sphere &) = default;
  sphere(sphere &&) = default;
  sphere &operator=(const sphere &) = default;
  sphere &operator=(sphere &&) = default;
  ~sphere() = default;

  sphere(const vec &p_pos, const double &p_radius);
};

#endif
