#include "Eagle.h"

TEagle::TEagle()
{
  visibility = 0;
}

float TEagle::GetVisibility()
{
  return visibility;
}

void TEagle::SetVisibility(float _visibility)
{
  visibility = _visibility;
}
