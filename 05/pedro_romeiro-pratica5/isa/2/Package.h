#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

class Package  {
    private:
        std::string _nome;
        std::string _endereco;
        unsigned int _peso;
        unsigned int _custo;

    public:
        Package(std::string nome, std::string endereco, unsigned int peso, unsigned int custo);
        virtual double calculate_cost();

        std::string get_endereco();

        std::string get_nome();

        int get_custo();

        int get_peso();
};

#endif