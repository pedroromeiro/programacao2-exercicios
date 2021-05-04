#include "Cubo.h"


Cubo::Cubo(double aresta, std::string color) : _aresta(aresta), _color(color) {}

std::string Cubo::get_nome() {
    return "Cubo";
}

std::string Cubo::get_cor() {
    return _color;
}

double Cubo::get_volume() {
    return _aresta * _aresta * _aresta;
}
