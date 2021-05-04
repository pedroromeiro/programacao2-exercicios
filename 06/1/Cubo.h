#ifndef CUBO_H
#define CUBO_H

#include <iostream>
#include "Forma3D.h"

class Cubo : public Forma3D {

    private:
        double _aresta;
        std::string _color;
    
    public:
        Cubo(double aresta, std::string color);
        virtual std::string get_nome() override;
        virtual std::string get_cor() override;
        virtual double get_volume() override;
};
#endif