#pragma once
#include "Figura.h"

// Clases hija
class Linea : public Figura {
private:
    float* segmentos;
    int cantidad;

public:
    Linea(const float* arr, int size)
        : Figura("Línea"), cantidad(size) {
        // memoria dinámica
        segmentos = new float[cantidad];
        for (int i = 0; i < cantidad; i++) {
            segmentos[i] = arr[i];
        }
    }

    ~Linea() override {
        // Liberamos memoria dinámica
        delete[] segmentos;
    }

    float CalcularArea() const override {
        return 0.0f;
    }

    float CalcularPerimetro() const override {
        float suma = 0.0f;
        for (int i = 0; i < cantidad; i++) {
            suma += segmentos[i];
        }
        return suma;
    }
};