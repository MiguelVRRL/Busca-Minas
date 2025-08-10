#include <raylib.h>

int main() {
  InitWindow(200, 200, "pepe");

  while (!WindowShouldClose()) {
    BeginDrawing();
    EndDrawing();
  }
  CloseWindow();
  return 0;
}
