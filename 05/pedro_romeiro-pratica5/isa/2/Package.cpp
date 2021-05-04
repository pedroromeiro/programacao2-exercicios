#include "Package.h"
#include <string>

Package::Package(std::string nome, std::string endereco,
unsigned int peso, unsigned int custo):
_nome(nome), _endereco(endereco), _peso(peso), _custo(custo) {}

double Package::calculate_cost() {
    return _custo * _peso;
}

std::string Package::get_endereco() {
    return _endereco;
}

std::string Package::get_nome() {
    return _nome;
}

int Package::get_custo()
{
    return _custo;
}

int Package::get_peso() {
    return _peso;
}
