#ifndef GRID_H
#define GRID_H

#include "buttons.h"
#include <vector>

class Grid {
public:
  Grid();
  ~Grid();

private:
  std::vector<Button> buttons;
  int m, n;
  float divisorX;
  float divisorY;
  float paddingX;
  float paddingY;
};

#endif
