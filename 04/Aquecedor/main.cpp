#include <iostream>
#include "Aquecedor.h"


int main() {

    Aquecedor aquecedor = Aquecedor();

    std::cout << "Temperatura sem alterações: " << aquecedor.getTemperatura() << std::endl;

    aquecedor.aquecer();
    std::cout << "Temperatura após aquecer: " << aquecedor.getTemperatura() << std::endl;

    aquecedor.resfriar();
    std::cout << "Temperatura após resfriar: " << aquecedor.getTemperatura() << std::endl;


    return 0;
}