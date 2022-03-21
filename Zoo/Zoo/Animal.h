#pragma once


class TAnimal
{
public:
  TAnimal(float _size, float _weight);
  TAnimal();

  ~TAnimal();

  float GetSize();
  float GetWeight();

  void SetSize(float _size);
  void SetWeight(float _weight);
  
protected:
  float size;

  float weight;

};