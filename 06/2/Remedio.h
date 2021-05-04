#ifndef REMEDIO_H
#define REMEDIO_H

#include <iostream>

#include "Produtos.h"

class Remedio : public Produtos {
    private:
        double _desconto_lab;
    
    public:
        Remedio(int codigo, std::string descricao, double preco_compra, double lucro, double desconto_lab);

        double getDescontoLab();
        virtual double gerarPrecoDeVenda() override;
};
#endif