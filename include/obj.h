#ifndef __OBJ__
#define __OBJ__

#include "ray.h"
#include "hit.h"

class obj {
public:

  virtual bool hits(const ray &p_ray, hit &p_hit) const = 0;

  obj() = default;
  obj(const obj &) = default;
  obj(obj &&) = default;
  obj &operator=(const obj &) = default;
  obj &operator=(obj &&) = default;
};

#endif
