#include "canvas.h"

canvas::canvas(const unsigned int &p_width, const unsigned int &p_height)
  : width(p_width), height(p_height) {
  this->pixels = new pixel*[this->height];
  for(unsigned int i = 0; i < this->height; i++) {
    this->pixels[i] = new pixel[this->width];
  }
}

canvas::~canvas() {
  for(unsigned int i = 0; i < this->height; i++) {
    delete[] this->pixels[i];
  }
  delete[] this->pixels;
}
