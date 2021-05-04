#include <iostream>
#include "listavetor.h"

ListaVetorInteiros::ListaVetorInteiros() {
    _elementos = new int[10]();

    _numElementosInseridos = 0;

    _capacidade = TAMANHO_INICIAL;

}

void ListaVetorInteiros::inserirElemento(int elemento) {
    if(_numElementosInseridos == _capacidade) {
        int *newData = new int[_capacidade * 2];

        for(int i=0; i < _numElementosInseridos; i++) {
            newData[i] = _elementos[i];
        }

        delete[] _elementos;

        _elementos = newData;
        _capacidade = _capacidade * 2;
    }

    _elementos[_numElementosInseridos] = elemento;
    _numElementosInseridos++;
}

void ListaVetorInteiros::removerPrimeiro() {
    if(_numElementosInseridos > 0) {
        int *newData = new int[_capacidade-1];

        for(int i=1; i < _numElementosInseridos; i++) {
            newData[i-1] = _elementos[i];
        }

        delete[] _elementos;

        _elementos = newData;
        _capacidade = _capacidade - 1;
        _numElementosInseridos--;
    }

}

void ListaVetorInteiros::removerUltimo() {
    if(_numElementosInseridos > 0) {
        int *newData = new int[_capacidade-1];

        for(int i=0; i < _numElementosInseridos-1; i++) {
            newData[i] = _elementos[i];
        }

        delete[] _elementos;

        _elementos = newData;
        _capacidade = _capacidade - 1;
        _numElementosInseridos--;
    }

}

void ListaVetorInteiros::inverter() {
    if(_numElementosInseridos > 0) {
        int *newData = new int[_capacidade];

        for(int i=_numElementosInseridos-1; i >= 0; i--) {
            newData[_numElementosInseridos-i-1] = _elementos[i];
        }

        delete[] _elementos;

        _elementos = newData;
    }

}

void ListaVetorInteiros::imprimir() {
    for(int i = 0; i < _numElementosInseridos; i++)
        std::cout << _elementos[i] << " ";
    std::cout << std::endl;

}

ListaVetorInteiros::~ListaVetorInteiros() {
    delete[] _elementos;

}