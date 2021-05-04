#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
#include "Forma2D.h"

class Circulo : public Forma2D {

    private:
        double _radius;
        std::string _color;
    
    public:
        Circulo(double radius, std::string color);
        virtual std::string get_nome() override;
        virtual std::string get_cor() override;
        virtual double get_perimetro() override;
        virtual double get_area() override;
};
#endif