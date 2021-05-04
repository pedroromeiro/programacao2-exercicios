#include "aluno.h"
#include <iostream>

using namespace std;

int main() {

    Aluno *aluno = new Aluno((char *) "Pedro R", 98892);

    for(int i = 1; i <= 10; i++) {
        aluno->adicionarNota(std::rand() % 5);
    }

    aluno->calcularMediaAluno();

    aluno->imprimeInformacoesAluno();

    delete aluno;

    return 0;
}