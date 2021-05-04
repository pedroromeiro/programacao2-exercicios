#include "Triangulo.h"


Triangulo::Triangulo(double base, double height, std::string color) : _base(base), _height(height), _color(color) {}

std::string Triangulo::get_nome() {
    return "Triangulo";
}

std::string Triangulo::get_cor() {
    return _color;
}

double Triangulo::get_perimetro() {
    return 3 * _base;
}

double Triangulo::get_area() {
    return _base * _height / 2;
}