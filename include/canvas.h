#ifndef __CANVAS__
#define __CANVAS__

#include <string>

struct pixel {
  unsigned char r;
  unsigned char g;
  unsigned char b;
};

class canvas {
private:
  pixel **pixels;

public:
  const unsigned int width;
  const unsigned int height;

  canvas() = delete;
  canvas(const canvas &) = delete;
  canvas(canvas &&) = delete;
  canvas &operator=(const canvas &) = delete;
  canvas &operator=(canvas &&) = delete;
  ~canvas();

  canvas(const unsigned int &p_width, const unsigned int &p_height);

  inline pixel * operator[](unsigned int);
  inline pixel const * operator[](unsigned int) const;
};

inline pixel * canvas::operator[](unsigned int p_index) {
  return pixels[p_index];
}
inline pixel const * canvas::operator[](unsigned int p_index) const {
  return pixels[p_index];
}

#endif
