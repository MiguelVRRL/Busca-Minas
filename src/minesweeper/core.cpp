#include "../utils/enums.h"
#include "raylib.h"

class Core {

public:
  Core();
  ~Core();

  auto getDifficulty() -> Difficulty;

  auto setDifficulty(Difficulty difficulty) -> void;

  auto DrawBoard() -> void;
  auto UpdateBoard() -> void;

private:
  Difficulty m_difficulty;
};

Core::Core() { m_difficulty = None; }

Core::~Core() {}

auto Core::getDifficulty() -> Difficulty { return m_difficulty; }

auto Core::setDifficulty(Difficulty difficulty) -> void {
  m_difficulty = difficulty;
}

auto Core::DrawBoard() -> void {
  BeginDrawing();
  EndDrawing();
}

auto Core::UpdateBoard() -> void {}
