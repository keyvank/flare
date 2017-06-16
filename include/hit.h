#ifndef __HIT__
#define __HIT__

#include "vec.h"

struct hit {
  double t;
  vec pos;
  vec norm;
  vec col;
};

#endif
