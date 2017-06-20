#include "tracer.h"
#include "vec.h"
#include "ray.h"
#include "canvas.h"
#include "def.h"

void tracer::add_obj(const std::shared_ptr<obj> p_obj) {
  this->objs.push_back(p_obj);
}

void tracer::render(canvas &p_canvas, const cam &p_cam) {
  for(unsigned int i = 0; i < p_canvas.height; i++) {
    for(unsigned int j = 0; j < p_canvas.width; j++) {
      ray r(vec(0),vec(0)); // TODO: Calculate the ray
      vec col = this->trace(r, 0);
      pixel pix { static_cast<unsigned char>(col.x * 255),
                  static_cast<unsigned char>(col.y * 255),
                  static_cast<unsigned char>(col.z * 255) };
      p_canvas[i][j] = pix;
    }
  }
}

vec tracer::trace(const ray &p_ray, int p_depth) {
  return YELLOW;
}
