#include "OvernightPackage.h"
#include <string>

 
OvernightPackage::OvernightPackage(std::string nome, std::string endereco, unsigned int peso, unsigned int custo, double taxe):
Package(nome, endereco, peso, custo), _taxe(taxe) {}

double OvernightPackage::calculate_cost() {
    return _taxe * get_custo() * get_peso();
}