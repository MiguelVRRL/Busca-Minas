#include <raylib.h>

class Menu {

public:
  Menu();
  ~Menu();
  void DrawMenu();
  void UpdateMenu();

private:
};

Menu::Menu() {}

Menu::~Menu() {}


auto Menu::DrawMenu() -> void {
  BeginDrawing();
  EndDrawing();
}

auto Menu::UpdateMenu() -> void {}

