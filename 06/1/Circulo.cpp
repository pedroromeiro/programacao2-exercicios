#include "Circulo.h"


Circulo::Circulo(double radius, std::string color) : _radius(radius), _color(color) {}

std::string Circulo::get_nome() {
    return "Circulo";
}

std::string Circulo::get_cor() {
    return _color;
}

double Circulo::get_perimetro() {
    return 2 * 3.14 * _radius;
}

double Circulo::get_area() {
    return 3.14 * (_radius * _radius);
}