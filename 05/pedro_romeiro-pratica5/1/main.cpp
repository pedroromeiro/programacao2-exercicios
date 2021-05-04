#include <iostream>

#include "Pessoa.h"
#include "Estudante.h"
#include "Turma.h"

int main() {
    Pessoa pessoa("Julio Reis");
    Turma turma("INF112", 98892);
    Estudante estudante("Jane Doe", 20180101, turma);
    std::cout << "A pessoa é: " << pessoa.getNome() << std::endl;
    std::cout << "O estudante é: " << estudante.getNome() << std::endl;
    std::cout << "O código da turma é: " << estudante.getTurmaCodigo() << std::endl;
    std::cout << "O ano da turma é: " << estudante.getTurmaAno() << std::endl;


    return 0;
}