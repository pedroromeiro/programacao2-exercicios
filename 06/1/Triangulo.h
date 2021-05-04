#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <iostream>
#include "Forma2D.h"

class Triangulo : public Forma2D {

    private:
        double _base;
        double _height;
        std::string _color;
    
    public:
        Triangulo(double base, double height, std::string color);
        virtual std::string get_nome() override;
        virtual std::string get_cor() override;
        virtual double get_perimetro() override;
        virtual double get_area() override;
};
#endif