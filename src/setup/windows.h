#ifndef WINDOWS_H
#define WINDOWS_H

#include <cstdint>
#include <string>

enum ScreenState { MenuState, InGame };

class Window {
public:
  Window();
  ~Window();
  auto getMaxWidth() -> int;
  auto getMaxHeight() -> int;
  auto getMinWidth() -> int;
  auto getMinHeight() -> int;
  auto getFps() -> int;
  auto getWindowName() -> const char *;
  auto getScreenState() -> ScreenState;

  auto setScreeState(ScreenState screenState) -> void;
  ;

private:
  int32_t m_fps;
  size_t m_max_width;
  size_t m_max_height;
  size_t m_min_width;
  size_t m_min_height;

  std::string m_window_name;

  ScreenState m_screen_state;
};
#endif
