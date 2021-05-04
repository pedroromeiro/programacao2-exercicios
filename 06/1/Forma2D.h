#ifndef FORMA2D_H
#define FORMA2D_H

#include <iostream>
#include "Forma.h"

class Forma2D : public Forma {
    
    public:
        virtual std::string get_nome()=0;
        virtual std::string get_cor()=0;
        virtual double get_perimetro()=0;
        virtual double get_area()=0;
};
#endif