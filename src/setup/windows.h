#ifndef WINDOWS_H
#define WINDOWS_H

#include <string>

enum ScreenState { Menu, InGame };

class Window {
public:
  Window();
  ~Window();
  int getMaxWidth();
  int getMaxHeight();
  int getMinWidth();
  int getMinHeight();
  int getFps();
  const char *getWindowName();
  ScreenState getScreenState();

  void setScreeState(ScreenState screenState);

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
