#include <iostream>
#include "vec.h"
#include "ray.h"
#include "cam.h"
#include "def.h"
#include "utils.h"
#include "canvas.h"
#include "tracer.h"

int main() {
  tracer engine;
  canvas cv(512,512);
  cam camera(vec(0,0,0),vec(0,0,1),vec(0,1,0),PI_OVER_4);
  engine.render(cv,camera);
  save_to_ppm(cv,"output.ppm");
}
