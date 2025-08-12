#ifndef BUTTON_H
#define BUTTON_H

class Button {

public:
  Button();
  ~Button();
  auto getIsClicked() -> bool;
  auto setIsClicked(bool state) -> void;

private:
  bool m_is_clicked;
  // Rectangle m_rect;
  // std::string m_text;
};

#endif
