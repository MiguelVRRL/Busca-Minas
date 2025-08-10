#include "raylib.h"
class Core {

public:
  Core();
  ~Core();
  void DrawBoard();
  void UpdateBoard();

private:
};

Core::Core() {}

Core::~Core() {}

auto Core::DrawBoard() -> void {
  BeginDrawing();
  EndDrawing();
}

auto Core::UpdateBoard() -> void {}
