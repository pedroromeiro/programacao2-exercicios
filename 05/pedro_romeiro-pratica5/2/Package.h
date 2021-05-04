#ifndef INF112_PACKAGE_H
#define INF112_PACKAGE_H

#include <string>

class Package  {
    private:
        const std::string _nome;
        const std::string _endereco;
        const unsigned int _peso;
        const unsigned int _custo;

    public:
        Package(std::string nome, std::string endereco,
        unsigned int peso, unsigned int custo);
        virtual double calculateCost();

        std::string getEndereco() const;

        std::string getNome() const;

        int getPeso() const;

        int getCusto() const;
};

#endif