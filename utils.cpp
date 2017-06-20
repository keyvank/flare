#include "utils.h"
#include <fstream>
#include <string>

void save_to_ppm(const canvas &p_canvas, const std::string &p_path) {
  std::ofstream file(p_path, std::ofstream::out);
  file << "P6\n" << p_canvas.width << " " << p_canvas.height << "\n255\n";
  for(unsigned int i = 0; i < p_canvas.height; i++) {
    file.write(reinterpret_cast<const char *>(p_canvas[i]), 3 * p_canvas.width);
  }
  file.close();
}
