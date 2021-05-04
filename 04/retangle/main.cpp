#include <iostream>
#include "Retangle.h"


int main() {

    Retangle retangle = Retangle();

    retangle.setLenght(5);
    retangle.setWidth(6);

    std::cout << "Area: " << retangle.area() << std::endl;
    std::cout << "Perimeter " << retangle.perimeter() << std::endl;
    std::cout << "Width: " << retangle.getWidth() << std::endl;
    std::cout << "Length " << retangle.getLenght() << std::endl;


    return 0;
}