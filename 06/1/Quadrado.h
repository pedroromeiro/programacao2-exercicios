#ifndef QUADRADO_H
#define QUADRADO_H

#include <iostream>
#include "Forma2D.h"

class Quadrado : public Forma2D {

    private:
        double _l;
        std::string _color;
    
    public:
        Quadrado(double l, std::string color);
        virtual std::string get_nome() override;
        virtual std::string get_cor() override;
        virtual double get_perimetro() override;
        virtual double get_area() override;
};
#endif