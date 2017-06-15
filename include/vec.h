#ifndef __VEC__
#define __VEC__
#include <iostream>

class vec final {
  friend std::ostream &operator<<(std::ostream &, const vec &);
  friend inline vec operator+(const vec &, const vec &);
  friend inline vec operator-(const vec &, const vec &);
  friend inline vec operator*(const vec &, const double &);
  friend inline vec operator*(const double &, const vec &);
  friend inline vec operator/(const vec &, const double &);

  friend inline double operator*(const vec &, const vec &); // Dot product
  friend inline vec operator^(const vec &, const vec &); // Cross product

public:
  double x;
  double y;
  double z;

  vec();
  vec(const vec &p_vec) = default;
  vec(vec &&p_vec) = default;
  vec &operator=(const vec &p_vec) = default;
  vec &operator=(vec &&p_vec) = default;
  ~vec() = default;
  vec(const double &p_x, const double &p_y, const double &p_z);
  vec(const double &p_v);
};

inline vec operator+(const vec &p_a, const vec &p_b) {
  return vec(p_a.x + p_b.x, p_a.y + p_b.y, p_a.z + p_b.z);
}

inline vec operator-(const vec &p_a, const vec &p_b) {
  return vec(p_a.x - p_b.x, p_a.y - p_b.y, p_a.z - p_b.z);
}

inline vec operator*(const vec &p_a, const double &p_b) {
  return vec(p_a.x * p_b, p_a.y * p_b, p_a.z * p_b);
}

inline vec operator*(const double &p_a, const vec &p_b) {
  return vec(p_b.x * p_a, p_b.y * p_a, p_b.z * p_a);
}

inline vec operator/(const vec &p_a, const double &p_b) {
  double z = 1 / p_b;
  return vec(p_a.x * z, p_a.y * z, p_a.z * z);
}

inline double operator*(const vec &p_a, const vec &p_b) {
  return p_a.x * p_b.x + p_a.y * p_b.y + p_a.z * p_b.z;
}

inline vec operator^(const vec &p_a, const vec &p_b) {
  return vec(p_a.y * p_b.z - p_a.z * p_b.y,
    p_a.z * p_b.x - p_a.x * p_b.z,
    p_a.x * p_b.y - p_a.y * p_b.x);
}

#endif
