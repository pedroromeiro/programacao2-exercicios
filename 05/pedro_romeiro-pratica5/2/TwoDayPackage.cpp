#include "TwoDayPackage.h"
#include <string>

 
TwoDayPackage::TwoDayPackage(std::string nome, std::string endereco, 
unsigned int peso, unsigned int custo, double taxe):
Package(nome, endereco, peso, custo), _taxe(taxe) {}

double TwoDayPackage::calculateCost() {
    return getCusto() * getPeso() + _taxe;
}