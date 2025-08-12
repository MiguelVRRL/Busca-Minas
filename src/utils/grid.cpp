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

Grid::Grid() {}

Grid::~Grid() {}
