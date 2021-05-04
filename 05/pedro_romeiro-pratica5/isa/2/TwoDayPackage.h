#ifndef TWO_DAY_PACKAGE_H
#define TWO_DAY_PACKAGE_H

#include <string>
#include "Package.h"

class TwoDayPackage : public Package {
    private:
        double _taxa;
    public:
        TwoDayPackage(std::string nome, std::string endereco,
        unsigned int peso, unsigned int custo, double taxa);

        virtual double calculate_cost() override;
};

#endif