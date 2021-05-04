#ifndef INF112_TWO_DAY_PACKAGE_H
#define INF112_TWO_DAY_PACKAGE_H

#include <string>
#include "Package.h"

class TwoDayPackage : public Package {
    private:
        double _taxe;
    public:
        TwoDayPackage(std::string nome, std::string endereco,
        unsigned int peso, unsigned int custo, double taxe);
        virtual double calculateCost() override;
};

#endif