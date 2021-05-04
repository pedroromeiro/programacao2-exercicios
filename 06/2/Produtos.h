#ifndef PRODUTOS_H
#define PRODUTOS_H

#include <iostream>

class Produtos {

    private:
        int _codigo;
        std::string _descricao;
        double _preco_compra;
        double _percentual_lucro;
    
    public:
        
        void setCodigo(int codigo);
        int getCodigo();

        void setDescricao(std::string descricao);
        std::string getDescricao();

        void setPrecoCompra(double preco_compra);
        double getPrecoCompra();

        void setPercentualLucro(double percentual_lucro);
        double getPercentualLucro();



        virtual double gerarPrecoDeVenda()=0;
};
#endif