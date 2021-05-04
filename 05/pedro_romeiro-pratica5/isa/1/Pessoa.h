#ifndef INF112_PESSOA_H
#define INF112_PESSOA_H

#include <string>


class Pessoa {
    private:
        const std::string _nome;
    public:
        Pessoa(std::string nome);
        virtual std::string getNome() const;
};

#endif