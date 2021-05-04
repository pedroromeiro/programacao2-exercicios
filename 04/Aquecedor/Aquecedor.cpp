#include "Aquecedor.h"
#include <iostream>


Aquecedor::Aquecedor() {
    temperatura = 20;
}

void Aquecedor::aquecer() {
    temperatura = temperatura + 5;
}

void Aquecedor::resfriar() {
    temperatura = temperatura - 5;
}

float Aquecedor::getTemperatura() {
    return temperatura;
}