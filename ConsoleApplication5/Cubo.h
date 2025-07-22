#pragma once
#include "Cuadrado.h"
#include "Figura.h" // Asegúrate de incluir esto si no está incluido en Cuadrado.h

// Cubo hereda de Cuadrado
class Cubo : public Cuadrado {

public:
    Cubo(float l) : Cuadrado(l) {
        nombre = "Cubo";
    }

    ~Cubo() override {}

    // Redefinimos área
    float CalcularArea() const override {
        return Superficie();
    }

    float CalcularPerimetro() const override {
        return 12 * lado;
    }

    float Volumen() const {
        return lado * lado * lado;
    }

    float Superficie() const {
        return 6 * lado * lado;
    }

    // ✅ Sobrescribimos ObtenerTipo()
    TipoFigura ObtenerTipo() const override {
        return TipoFigura::CUBO;
    }
};
