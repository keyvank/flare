#ifndef __CAM__
#define __CAM__

#include "vec.h"

class cam final {

public:
  cam() = delete;
  cam(const cam &) = default;
  cam(cam &&) = default;
  cam &operator=(const cam &) = default;
  cam &operator=(cam &&) = default;
  ~cam() = default;

  cam(const vec &p_pos, const vec &p_dir, const vec &p_up, const double &p_fov);
};

#endif
