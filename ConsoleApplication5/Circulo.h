#pragma once
#include "Figura.h"
#include <cmath>

// Clase hija
class Circulo 
: public Figura {
private: float radio; // circulo -> radio

public:
    Circulo(float r) : Figura("C�rculo"), radio(r) {}
    ~Circulo() override {}

    // Implementaci�n CalcularArea 
float CalcularArea() const override {
return 3.14159f * radio * radio;
}

// Implementaci�n CalcularPerimetro
float CalcularPerimetro() const override {
return 2 * 3.14159f * radio;
  }
};