#include "Remedio.h"


Remedio::Remedio(int codigo, std::string descricao, 
double preco_compra, double percentual_lucro, double desconto_lab): _desconto_lab(desconto_lab) {
    setCodigo(codigo);
    setDescricao(descricao);
    setPrecoCompra(preco_compra); 
    setPercentualLucro(percentual_lucro);
}

double Remedio::getDescontoLab() {
    return _desconto_lab;
}

double Remedio::gerarPrecoDeVenda() {
    return getPrecoCompra() + (getPrecoCompra() * getPercentualLucro()) - _desconto_lab;
}

