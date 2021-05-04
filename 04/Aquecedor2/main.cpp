#include <iostream>
#include "Aquecedor.h"


int main() {

    Aquecedor aquecedor  = Aquecedor();
    Aquecedor aquecedor1 = Aquecedor(30);
    Aquecedor aquecedor2 = Aquecedor(25, 6);

    std::cout << "Aquecedor primeiro construtor: " << std::endl;

    std::cout << "Temperatura sem alterações: " << aquecedor.getTemperatura() << std::endl;

    aquecedor.aquecer();
    std::cout << "Temperatura após aquecer: " << aquecedor.getTemperatura() << std::endl;

    aquecedor.resfriar();
    std::cout << "Temperatura após resfriar: " << aquecedor.getTemperatura() << std::endl;


    std::cout << std::endl << std::endl << "Aquecedor segundo construtor: ";

    std::cout << "Temperatura sem alterações: " << aquecedor1.getTemperatura() << std::endl;

    aquecedor1.aquecer();
    std::cout << "Temperatura após aquecer: " << aquecedor1.getTemperatura() << std::endl;

    aquecedor1.resfriar();
    std::cout << "Temperatura após resfriar: " << aquecedor1.getTemperatura() << std::endl;


    std::cout << std::endl << std::endl << "Aquecedor terceiro construtor: ";
    std::cout << "Temperatura sem alterações: " << aquecedor2.getTemperatura() << std::endl;

    aquecedor2.aquecer();
    std::cout << "Temperatura após aquecer: " << aquecedor2.getTemperatura() << std::endl;

    aquecedor2.resfriar();
    std::cout << "Temperatura após resfriar: " << aquecedor2.getTemperatura() << std::endl;


    return 0;
}