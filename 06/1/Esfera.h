#ifndef ESFERA_H
#define ESFERA_H

#include <iostream>
#include "Forma3D.h"

class Esfera : public Forma3D {

    private:
        double _radius;
        std::string _color;
    
    public:
        Esfera(double radius, std::string color);
        virtual std::string get_nome() override;
        virtual std::string get_cor() override;
        virtual double get_volume() override;
};
#endif