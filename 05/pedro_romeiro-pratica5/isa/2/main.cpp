#include <iostream>


#include "Package.h"

#include "TwoDayPackage.h"

#include "OvernightPackage.h"

int main() {

    OvernightPackage overnight("Pacote 1", "Guarapari", 15, 22, 2.00);
    TwoDayPackage twoDay("Pacote 2", "Rua Ciclano", 45, 67, 10.00);
    Package package("Pacote 3", "Av fulano", 34, 56);

    std::cout << "Package esta noite:" << std::endl;
    std::cout << "Nome: " << overnight.get_nome() << std::endl;
    std::cout << "Endereço: " << overnight.get_endereco() << std::endl;
    std::cout << "Custo: " << overnight.get_custo() << std::endl;
    std::cout << "Peso (kg): " << overnight.get_peso() << std::endl;
    std::cout << "Custo calculado: " << overnight.calculate_cost() << std::endl;

    std::cout << "Package de dois dias:" << std::endl;
    std::cout << "Nome: " << twoDay.get_nome() << std::endl;
    std::cout << "Endereço: " << twoDay.get_endereco() << std::endl;
    std::cout << "Custo: " << twoDay.get_custo() << std::endl;
    std::cout << "Peso (kg): " << twoDay.get_peso() << std::endl;
    std::cout << "Custo calculado: " << twoDay.calculate_cost() << std::endl;

    std::cout << "Package:" << std::endl;
    std::cout << "Nome: " << package.get_nome() << std::endl;
    std::cout << "Endereço: " << package.get_endereco() << std::endl;
    std::cout << "Custo: " << package.get_custo() << std::endl;
    std::cout << "Peso (kg): " << package.get_peso() << std::endl;
    std::cout << "Custo calculado: " << package.calculate_cost() << std::endl;






    return 0;
}