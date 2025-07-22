#include <iostream>
#include <Windows.h>
#include "Figura.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include "Cubo.h"
#include "FiguraNLados.h"
#include "Linea.h"
using namespace std;

int main() {
    SetConsoleOutputCP(65001); // Para que imprima correctamente caracteres 

    Figura* figuras[5];

    figuras[0] = new Circulo(5);
    figuras[1] = new Cuadrado(4);
    figuras[2] = new Cubo(3);
    figuras[3] = new FiguraNLados(6, 2);

    float segmentos[] = { 1.5f, 2.0f, 3.3f };
    figuras[4] = new Linea(segmentos, 3);

    // Mostrar área y perímetro
    for (int i = 0; i < 5; i++) {
        cout << figuras[i]->ObtenerNombreDeFigura()
            << " | Área: " << figuras[i]->CalcularArea()
            << " | Perímetro: " << figuras[i]->CalcularPerimetro() << endl;
    }

    // Usamos el método ObtenerTipo()
    if (figuras[2]->ObtenerTipo() == TipoFigura::CUBO) {
        // Usamos static_cast
        Cubo* cubo = static_cast<Cubo*>(figuras[2]);
        cout << "→ Volumen del Cubo: " << cubo->Volumen() << endl;
        cout << "→ Superficie del Cubo: " << cubo->Superficie() << endl;
    }

    // Liberar memoria
    for (int i = 0; i < 5; i++) {
        delete figuras[i];
    }

    return 0;
}
