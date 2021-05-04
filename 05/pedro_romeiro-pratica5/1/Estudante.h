#ifndef INF112_ESTUDANTE_H
#define INF112_ESTUDANTE_H

#include "Pessoa.h"
#include "Turma.h"

class Estudante : public Pessoa {
    private:
        const int _matricula;
        Turma _turma;
    public:
        Estudante(std::string nome,
        int matricula, Turma turma);
        int getMatricula() const;
        void getTurma();
        int getTurmaAno();
        std::string getTurmaCodigo();
};

#endif