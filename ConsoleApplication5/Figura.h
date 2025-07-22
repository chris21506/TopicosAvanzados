#pragma once
#include <string>
using namespace std;

enum class TipoFigura { CIRCULO, CUADRADO, CUBO, FIGURA_N_LADOS, LINEA, DESCONOCIDO };

class Figura {
protected:
    string nombre;

public:
    // Constructor name
    Figura(const string& name) : nombre(name) {}

    // Destructor virtual 
    virtual ~Figura() {}

    // Funci�n virtual
    virtual float CalcularArea() const = 0;

    // Funci�n virtual
    virtual float CalcularPerimetro() const = 0;

    // Devuelve el nombre de la figura
    const string& ObtenerNombreDeFigura() const { return nombre; }

    // Funci�n virtual para identificar el tipo de figura
    virtual TipoFigura ObtenerTipo() const { return TipoFigura::DESCONOCIDO; }
};
