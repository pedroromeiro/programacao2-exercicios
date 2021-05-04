#ifndef ARTIGO_H
#define ARTIGO_H

#include <iostream>

#include "Produtos.h"

class ArtigoHigiene : public Produtos {
    
    public:
        ArtigoHigiene(int codigo, std::string descricao, double preco_compra, double lucro);
        virtual double gerarPrecoDeVenda() override;
};
#endif