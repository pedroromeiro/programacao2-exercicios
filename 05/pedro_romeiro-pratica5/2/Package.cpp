#include "Package.h"
#include <string>

Package::Package(std::string nome, std::string endereco,
unsigned int peso, unsigned int custo):
_nome(nome), _endereco(endereco), _peso(peso), _custo(custo) {}

double Package::calculateCost() {
    return _custo * _peso;
}

std::string Package::getEndereco() const {
    return this->_endereco;
}

std::string Package::getNome() const {
    return this->_nome;
}

int Package::getPeso() const {
    return this->_peso;
}

int Package::getCusto() const {
    return this->_custo;
}