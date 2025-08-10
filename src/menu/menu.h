#ifndef MENU_H
#define MENU_H

#include "../utils/enums.h"

class Menu {

public:
  Menu();
  ~Menu();
  auto getDifficulty() -> Difficulty;
  
  auto setDifficulty(Difficulty difficulty) -> void;

  auto DrawMenu() -> void;
  auto UpdateMenu() -> void;

private:
  Difficulty difficulty;

};

#endif
