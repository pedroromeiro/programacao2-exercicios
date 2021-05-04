#include "Retangle.h"
#include <iostream>


Retangle::Retangle() {
    width = 1;
    length = 1;
}

float Retangle::perimeter() {
    return 2*width + 2*length;
}

float Retangle::area() {
    return length*width;
}

float Retangle::getLenght() {
    return length;
}
void Retangle::setLenght(float length) {
    
    if(length > 0 && length < 20) this->length = length;
    else std::cout << "O valor do length precisa ser maior do que zero e menor do que 20." << std::endl;
}

float Retangle::getWidth() {
    return width;
}

void Retangle::setWidth(float width) {

    if(width > 0 && width < 20) this->width = width;
    else std::cout << "O valor do width precisa ser maior do que zero e menor do que 20." << std::endl;
}