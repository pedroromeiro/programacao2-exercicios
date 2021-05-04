#include "Estudante.h"
#include <string>
#include "Turma.h"
#include <iostream>


Estudante::Estudante(std::string nome, int matricula, Turma turma):
    Pessoa(nome), _matricula(matricula), _turma(turma) {}

int Estudante::getMatricula() const {
    return this->_matricula;
}

int Estudante::getTurmaAno() {
    return this->_turma.getAno();
}

std::string Estudante::getTurmaCodigo() {
    return this->_turma.getCodigo();
}


