#include "Quadrado.h"
#include "Circulo.h"
#include "Triangulo.h"
#include "Esfera.h"
#include "Cubo.h"

#include <iostream>

using namespace std;

int main() {
    cout << "============2d=============" << endl;
    Quadrado quadrado(2, "Blue");
    cout << "Nome: " << quadrado.get_nome() << endl;
    cout << "Cor: " << quadrado.get_cor() << endl;
    cout << "Area: " << quadrado.get_area() << endl;
    cout << "Perimetro: " << quadrado.get_perimetro() << endl;

    cout << "===========================" << endl;

    Circulo circulo(4, "Purple");
    cout << "Nome: " << circulo.get_nome() << endl;
    cout << "Cor: " << circulo.get_cor() << endl;
    cout << "Area: " << circulo.get_area() << endl;
    cout << "Perimetro: " << circulo.get_perimetro() << endl;

    cout << "===========================" << endl;

    Triangulo triangulo(3, 5, "Green");
    cout << "Nome: " << triangulo.get_nome() << endl;
    cout << "Cor: " << triangulo.get_cor() << endl;
    cout << "Area: " << triangulo.get_area() << endl;
    cout << "Volume: " << triangulo.get_perimetro() << endl;

    cout << endl << endl << "============3d=============" << endl;

    Esfera esfera(5, "Red");
    cout << "Nome: " << esfera.get_nome() << endl;
    cout << "Cor: " << esfera.get_cor() << endl;
    cout << "Volume: " << esfera.get_volume() << endl;

    cout << "===========================" << endl;

    Cubo cubo(3, "Gray");
    cout << "Nome: " << cubo.get_nome() << endl;
    cout << "Cor: " << cubo.get_cor() << endl;
    cout << "Volume: " << cubo.get_volume() << endl;



    return 0;
}