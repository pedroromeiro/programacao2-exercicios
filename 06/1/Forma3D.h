#ifndef FORMA3D_H
#define FORMA3D_H

#include <iostream>
#include "Forma.h"

class Forma3D : public Forma {
    
    public:
        virtual std::string get_nome()=0;
        virtual std::string get_cor()=0;
        virtual double get_volume()=0;
};
#endif