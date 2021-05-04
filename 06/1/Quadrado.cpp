#include "Quadrado.h"


Quadrado::Quadrado(double l, std::string color) : _l(l), _color(color) {}

std::string Quadrado::get_nome() {
    return "Quadrado";
}

std::string Quadrado::get_cor() {
    return _color;
}

double Quadrado::get_perimetro() {
    return 4*_l;
}

double Quadrado::get_area() {
    return _l*_l;
}