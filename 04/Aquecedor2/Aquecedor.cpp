#include "Aquecedor.h"
#include <iostream>

Aquecedor::Aquecedor() {
    temperaturaMinima = 10;
    temperaturaMaxima = 40;
    temperatura = 20;
    fatorDeIncrementoDaTemperatura = 5;
}

Aquecedor::Aquecedor(float temperatura) {
    temperaturaMinima = 10;
    temperaturaMaxima = 40;
    this->temperatura = temperatura;
    fatorDeIncrementoDaTemperatura = 5;
}

Aquecedor::Aquecedor(float temperatura, float fatorDeIncrementoDaTemperatura) {
    temperaturaMinima = 10;
    temperaturaMaxima = 40;
    this->temperatura = temperatura;
    this->fatorDeIncrementoDaTemperatura = fatorDeIncrementoDaTemperatura;
}

void Aquecedor::aquecer() {
    if(temperatura + fatorDeIncrementoDaTemperatura <= temperaturaMaxima) 
        temperatura = temperatura + fatorDeIncrementoDaTemperatura;
    else std::cout << "A temperatura precisa ser menor do que 40 graus." << std::endl;
}

void Aquecedor::setFatorDeIncrementoDaTemperatura(float fatorDeIncrementoDaTemperatura) {
    this->fatorDeIncrementoDaTemperatura = fatorDeIncrementoDaTemperatura;
}

void Aquecedor::resfriar() {
    if(temperatura - fatorDeIncrementoDaTemperatura >= temperaturaMinima) 
        temperatura = temperatura - fatorDeIncrementoDaTemperatura;
    else std::cout << "A temperatura precisa ser maior do que 10 graus." << std::endl;
}

float Aquecedor::getTemperatura() {
    return temperatura;
}