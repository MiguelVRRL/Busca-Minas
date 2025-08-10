#include <string>

enum ScreenState { MenuState, InGame };

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

Window::Window() {
  m_fps = 60;
  m_max_width = 1280;
  m_max_height = 720;
  m_min_width = 720;
  m_min_height = 480;

  m_window_name = "Minesweeper";
  m_screen_state = MenuState;
}

Window::~Window() {}

auto Window::getMaxWidth() -> int { return m_max_width; }

auto Window::getMaxHeight() -> int { return m_max_height; }

auto Window::getMinWidth() -> int { return m_min_width; }

auto Window::getMinHeight() -> int { return m_min_height; }

auto Window::getFps() -> int { return m_fps; }

auto Window::getWindowName() -> const char * { return m_window_name.c_str(); }

auto Window::getScreenState() -> ScreenState { return m_screen_state; }

auto Window::setScreeState(ScreenState screenState) -> void {
  m_screen_state = screenState;
}
