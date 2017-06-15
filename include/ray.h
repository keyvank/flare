#ifndef __RAY__
#define __RAY__
#include <iostream>

class ray final {
  friend std::ostream &operator<<(std::ostream &, const ray &);
public:
  vec o;
  vec d;

  ray() = delete;
  ray(const ray &p_ray) = default;
  ray(ray &&p_ray) = default;
  ray &operator=(const ray &p_ray) = default;
  ray &operator=(ray &&p_ray) = default;
  ~ray() = default;
  ray(const vec &p_o, const vec &p_d);
};

#endif
