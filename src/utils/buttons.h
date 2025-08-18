#ifndef BUTTON_H
#define BUTTON_H

#include <string>
class Button {

public:
  Button();
  ~Button();
  auto getIsClicked() -> bool;
  auto getText() -> std::string;
  auto setIsClicked(bool state) -> void;
  auto setText(const char *Text) -> void;

private:
  bool m_is_clicked;
  std::string m_text;
};

#endif
