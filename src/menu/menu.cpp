#include "../utils/enums.h"
#include <raylib.h>

class Menu {

public:
  Menu();
  ~Menu();
  auto getDifficulty() -> Difficulty;

  auto setDifficulty(Difficulty difficulty) -> void;

  auto DrawMenu() -> void;
  auto UpdateMenu() -> void;

private:
  Difficulty m_difficulty;
};

Menu::Menu() { m_difficulty = None; }

Menu::~Menu() {}

auto Menu::getDifficulty() -> Difficulty { return m_difficulty; }

auto Menu::setDifficulty(Difficulty difficulty) -> void {
  m_difficulty = difficulty;
}

auto Menu::DrawMenu() -> void {
  BeginDrawing();
  EndDrawing();
}

auto Menu::UpdateMenu() -> void {}
