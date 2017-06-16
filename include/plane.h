#ifndef __PLANE__
#define __PLANE__

#include "vec.h"
#include "ray.h"
#include "hit.h"
#include "obj.h"

class plane : public obj {
public:

  vec pos;
  vec norm;

  virtual bool hits(const ray &p_ray, hit &p_hit) const;

  plane() = delete;
  plane(const plane &) = default;
  plane(plane &&) = default;
  plane &operator=(const plane &) = default;
  plane &operator=(plane &&) = default;
  ~plane() = default;

  plane(const vec &p_pos, const vec &p_norm);
};

#endif
