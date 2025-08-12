#include "menu/menu.h"
#include "minesweeper/core.h"
#include "setup/windows.h"
#include <raylib.h>

auto main() -> int {

  Window window;
  // -- ralylib setup --
  InitWindow(window.getMaxWidth(), window.getMaxHeight(),
             window.getWindowName());
  SetTargetFPS(window.getFps());
  SetWindowMinSize(window.getMinWidth(), window.getMinHeight());

  Menu menu;
  Core mine_sweeper;

  while (!WindowShouldClose()) {

    switch (window.getScreenState()) {
    case MenuState:
      menu.DrawMenu();
      menu.UpdateMenu();
      if (menu.getDifficulty() != None) {
        window.setScreeState(InGame);
        mine_sweeper.setDifficulty(menu.getDifficulty());
      };
      break;
    case InGame:
      mine_sweeper.DrawBoard();
      mine_sweeper.UpdateBoard();
      break;
    }
  }
  CloseWindow();

  return 0;
}
