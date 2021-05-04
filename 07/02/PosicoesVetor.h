#ifndef INF_112_POSICOESVETOR_H
#define INF_112_POSICOESVETOR_H
#include <iostream>

class PosicoesVetor {
private:
    int _y;
    int *_vetor;
public: 
    PosicoesVetor(int y);
    ~PosicoesVetor();
    void popularVetor();
    bool isNumber(std::string s);
};

#endif