#include <iostream>
#include <ctime>

#include "aluno.h"


Aluno::Aluno(char *nome, int matricula) {
    _notas = new int[TAMANHO_INICIAL]();
    _nome = new char[sizeof(nome) / sizeof(nome[0])]();
    for(int i = 0; i < sizeof(nome) / sizeof(nome[0]); i++) {
        _nome[i] = nome[i];
    }

    _matricula = matricula;

    _numNotasInseridas = 0;
    _capacidadeNotas = TAMANHO_INICIAL;

    _media_notas = 0;

}

Aluno::~Aluno() {
    delete[] _notas;
    delete[] _nome;
}

void Aluno::adicionarNota(int nota) {
    if(_numNotasInseridas ==  _capacidadeNotas) {
        int *newData = new int[_capacidadeNotas * 2];

        for(int i=0; i < _numNotasInseridas; i++) {
            newData[i] = _notas[i];
        }

        delete[] _notas;

        _notas = newData;
        _capacidadeNotas = _capacidadeNotas * 2;
    }

    _notas[_numNotasInseridas] = nota;
    _numNotasInseridas++;
}

void Aluno::calcularMediaAluno() {
    for(int i=0; i < _numNotasInseridas; i++) {
        _media_notas += (double) _notas[i];
    }

    _media_notas /= _numNotasInseridas;
}

void Aluno::imprimeInformacoesAluno() {
    std::cout << "Nome: " << _nome << std::endl;
    std::cout << "Matrícula: " << _matricula << std::endl;

    std::cout << "Notas: ";
    for(int i = 0; i < _numNotasInseridas; i++) {
        std::cout << _notas[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Média das notas: " << _media_notas << std::endl;
}


