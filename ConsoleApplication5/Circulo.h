#pragma once
#include "Figura.h"
#include <cmath>

// Clase hija
class Circulo 
: public Figura {
private: float radio; // circulo -> radio

public:
    Circulo(float r) : Figura("Círculo"), radio(r) {}
    ~Circulo() override {}

    // Implementación CalcularArea 
float CalcularArea() const override {
return 3.14159f * radio * radio;
}

// Implementación CalcularPerimetro
float CalcularPerimetro() const override {
return 2 * 3.14159f * radio;
  }
};