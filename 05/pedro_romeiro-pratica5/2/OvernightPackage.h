#ifndef INF112_TWO_DAY_OVERNIGHTPACKAGE_H
#define INF112_TWO_DAY_OVERNIGHTPACKAGE_H

#include <string>
#include "Package.h"

class OvernightPackage : public Package {
    private:
        double _taxe;
    public:
        OvernightPackage(std::string nome, std::string endereco,
        unsigned int peso, unsigned int custo, double taxe);
        virtual double calculateCost() override;
};

#endif