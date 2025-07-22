#pragma once
#include "Figura.h"
#include <cmath>

// Clase para figuras
class FiguraNLados 
: public Figura {
protected:
int nLados;
float longitudLado;

public:
FiguraNLados(int n, float longitud)
: Figura("Figura " + to_string(n) + " lados"), nLados(n), longitudLado(longitud) {
}

~FiguraNLados() override {}

float CalcularArea() const override {
float apotema = longitudLado / (2 * tan(3.14159f / nLados));
return (CalcularPerimetro() * apotema) / 2;
    }

float CalcularPerimetro() const override {
return nLados * longitudLado;
  }
};