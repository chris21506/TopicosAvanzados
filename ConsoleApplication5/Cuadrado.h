#pragma once
#include "Figura.h"


class Cuadrado 
: public Figura {
protected:
    
float lado;

public:
Cuadrado(float l) : Figura("Cuadrado"), lado(l) {}
~Cuadrado() override {}

float CalcularArea() const override {
return lado * lado;
}

float CalcularPerimetro() const override {
return 4 * lado;
  }
};