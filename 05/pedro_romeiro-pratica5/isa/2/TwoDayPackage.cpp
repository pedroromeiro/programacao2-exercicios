#include "TwoDayPackage.h"
#include <string>

 
TwoDayPackage::TwoDayPackage(std::string nome, std::string endereco, unsigned int peso, unsigned int custo, double taxa):
Package(nome, endereco, peso, custo), _taxa(taxa) {}

double TwoDayPackage::calculate_cost() {
    return _taxa + (get_custo() * get_peso());
}