#include "buttons.h"
#include "textures.h"
#include <vector>

class Grid {

  friend class GridBuilder;

private:
  Grid();
  ~Grid();

  int m_m, m_n;
  float m_divisor_x;
  float m_divisor_y;
  float m_padding_x;
  float m_padding_y;
};

Grid::Grid() {}
Grid::~Grid() {}

class GridBuilder {
private:
  Grid m_grid;

public:
  auto addDimension(int m, int n) -> void;
  auto addDivisors(float divisor_x, float divisor_y) -> void;
  auto addPadding(float padding_x, float padding_y) -> void;
  auto Build() -> Grid;
};

class ButtonGrid {
public:
  ButtonGrid();
  ~ButtonGrid();

private:
  std::vector<Button> buttons;
  GridBuilder m_grid;
};

ButtonGrid::ButtonGrid() {}
ButtonGrid::~ButtonGrid() {}

class TextureGrid {
public:
  TextureGrid();
  ~TextureGrid();

private:
  std::vector<CTexture> buttons;
  GridBuilder m_grid;
};

TextureGrid::TextureGrid() {}
TextureGrid::~TextureGrid() {}
