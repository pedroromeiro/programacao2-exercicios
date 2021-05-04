#ifndef INF112_TURMA_H
#define INF112_TURMA_H
#include <string>

class Turma {
    private:
        std::string _codigo;
        int _ano;
    public:
        Turma(std::string codigo, int ano);
        std::string getCodigo();
        void setCodigo(std::string codigo);

        int getAno();
        void setAno(int ano);
};

#endif