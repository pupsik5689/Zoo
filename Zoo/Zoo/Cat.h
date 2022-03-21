#pragma once
#include "Mammal.h"

class TCat : public TMammal
{
public:
  TCat();
  TCat(float size, float weight, int teeth, bool ground, bool _domestic) :TMammal(size, weight, teeth, ground)
  {
    domestic = _domestic;
  }

  ~TCat();

  bool GetDomestic();
  float GetTail();

  void SetDomestic(bool _domestic);
  void SetTail(bool _tail);

protected:
  bool domestic;
  float tail;

};
