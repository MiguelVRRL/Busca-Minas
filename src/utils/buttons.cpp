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

Button::Button() { m_is_clicked = false; }

Button::~Button() {}

auto Button::getIsClicked() -> bool { return m_is_clicked; }

auto Button::getText() -> std::string { return m_text; }

auto Button::setIsClicked(bool state) -> void { m_is_clicked = state; }

auto Button::setText(const char *text) -> void { m_text = text;}
