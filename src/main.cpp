#include "setup/windows.h"
#include <raylib.h>

auto main() -> int {

  Window window;
  // -- ralylib setup --
  InitWindow(window.getMaxWidth(), window.getMaxHeight(),
             window.getWindowName());
  SetTargetFPS(window.getFps());
  SetWindowMinSize(window.getMinWidth(), window.getMinHeight());

  while (!WindowShouldClose()) {

    switch (window.getScreenState()) {
    case Menu:
      BeginDrawing();
      EndDrawing();
      break;
    case InGame:
      BeginDrawing();
      EndDrawing();
    }
  }
  CloseWindow();

  return 0;
}
