#ifndef CORE_H
#define CORE_H

#include "../utils/enums.h"

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

#endif
