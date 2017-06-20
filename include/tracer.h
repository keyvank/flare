#ifndef __TRACER__
#define __TRACER__

#include <vector>
#include <memory>
#include "obj.h"
#include "cam.h"
#include "canvas.h"

class tracer {
private:
  std::vector<std::shared_ptr<obj>> objs;

public:

  tracer() = default;
  tracer(const tracer &) = delete;
  tracer(tracer &&) = delete;
  tracer &operator=(const tracer &) = delete;
  tracer &operator=(tracer &&) = delete;
  virtual ~tracer() = default;

  void add_obj(const std::shared_ptr<obj> p_obj);
  void render(canvas &p_canvas, const cam &p_cam);
protected:
  vec trace(const ray &p_ray, int p_depth);
};

#endif
