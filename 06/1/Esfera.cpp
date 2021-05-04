#include "Esfera.h"


Esfera::Esfera(double radius, std::string color) : _radius(radius), _color(color) {}

std::string Esfera::get_nome() {
    return "Esfera";
}

std::string Esfera::get_cor() {
    return _color;
}

double Esfera::get_volume() {
    return (4 * 3.14 * (_radius * _radius * _radius))/3;
}
