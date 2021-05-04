#include "Turma.h"

Turma::Turma(std::string codigo, int ano):
_codigo(codigo), _ano(ano) {}

std::string Turma::getCodigo() {
    return this->_codigo;
}

void Turma::setCodigo(std::string codigo) {
    this->_codigo = codigo;
}

int Turma::getAno() {
    return this->_ano;
}

void Turma::setAno(int ano) {
    this->_ano = ano;
}