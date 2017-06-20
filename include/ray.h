#ifndef __RAY__
#define __RAY__

#include <iostream>
#include "vec.h"

class ray final {
  friend std::ostream &operator<<(std::ostream &, const ray &);
public:
  vec o;
  vec d;

  ray() = delete;
  ray(const ray &) = default;
  ray(ray &&) = default;
  ray &operator=(const ray &) = default;
  ray &operator=(ray &&) = default;
  ~ray() = default;

  ray(const vec &p_o, const vec &p_d);
};

#endif
