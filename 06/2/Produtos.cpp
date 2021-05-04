#include "Produtos.h"


void Produtos::setCodigo(int codigo) {
    _codigo = codigo;
}
int Produtos::getCodigo() {
    return _codigo;
}

void Produtos::setDescricao(std::string descricao) {
    _descricao = descricao;
}

std::string Produtos::getDescricao() {
    return _descricao;
}

void Produtos::setPrecoCompra(double preco_compra) {
    _preco_compra = preco_compra;
}

double Produtos::getPrecoCompra() {
    return _preco_compra;
}

void Produtos::setPercentualLucro(double percentual_lucro) {
    _percentual_lucro = percentual_lucro;
}

double Produtos::getPercentualLucro() {
    return _percentual_lucro;
}