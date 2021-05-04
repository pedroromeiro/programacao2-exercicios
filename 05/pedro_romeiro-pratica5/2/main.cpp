#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main() {

    Package package("Mercado Livre PC", "Rua bla bla 1", 100, 100);
    TwoDayPackage twoDayPackage("HeadSet gamer", "Rua bla bla 2", 20, 100, 10.00);
    OvernightPackage overnightPackage("Tablet", "Rua bla bla 3", 20, 100, 2.00);

    std::cout << "===== Package =====" << std::endl;
    std::cout << "Nome: " << package.getNome() << std::endl;
    std::cout << "Endereço: " << package.getEndereco() << std::endl;
    std::cout << "Peso: " << package.getPeso() << std::endl;
    std::cout << "Custo: " << package.getCusto() << std::endl;
    std::cout << "Custo calculado: " << package.calculateCost() << std::endl << std::endl;

    std::cout << "===== Package TwoDays =====" << std::endl;
    std::cout << "Nome: " << twoDayPackage.getNome() << std::endl;
    std::cout << "Endereço: " << twoDayPackage.getEndereco() << std::endl;
    std::cout << "Peso: " << twoDayPackage.getPeso() << std::endl;
    std::cout << "Custo: " << twoDayPackage.getCusto() << std::endl;
    std::cout << "Custo calculado: " << twoDayPackage.calculateCost() << std::endl << std::endl;

    std::cout << "===== Package OverNight =====" << std::endl;
    std::cout << "Nome: " << overnightPackage.getNome() << std::endl;
    std::cout << "Endereço: " << overnightPackage.getEndereco() << std::endl;
    std::cout << "Peso: " << overnightPackage.getPeso() << std::endl;
    std::cout << "Custo: " << overnightPackage.getCusto() << std::endl;
    std::cout << "Custo calculado: " << overnightPackage.calculateCost() << std::endl;





    return 0;
}