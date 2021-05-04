#include "OvernightPackage.h"
#include <string>

 
OvernightPackage::OvernightPackage(std::string nome, std::string endereco, 
unsigned int peso, unsigned int custo, double taxe):
Package(nome, endereco, peso, custo), _taxe(taxe) {}

double OvernightPackage::calculateCost() {
    return getCusto() * getPeso() * _taxe;
}