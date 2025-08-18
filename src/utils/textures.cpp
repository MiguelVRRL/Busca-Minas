#include "raylib.h"
class CTexture {
public:
  CTexture();
  ~CTexture();

private:
  Rectangle m_rect;
};

CTexture::CTexture() {}
CTexture::~CTexture() {}
