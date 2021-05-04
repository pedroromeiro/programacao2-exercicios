#include "Pessoa.h"

Pessoa::Pessoa(std::string nome):
_nome(nome) {}

std::string Pessoa::getNome() const {
    return this->_nome;
}