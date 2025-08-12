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

Button::Button() { m_is_clicked = false; }

Button::~Button() {}

auto Button::getIsClicked() -> bool { return m_is_clicked; }

auto Button::setIsClicked(bool state) -> void { m_is_clicked = state; }
