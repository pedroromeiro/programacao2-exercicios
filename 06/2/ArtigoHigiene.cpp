#include "ArtigoHigiene.h"


ArtigoHigiene::ArtigoHigiene(int codigo, std::string descricao, 
double preco_compra, double percentual_lucro) {
    setCodigo(codigo);
    setDescricao(descricao);
    setPrecoCompra(preco_compra); 
    setPercentualLucro(percentual_lucro);
}

double ArtigoHigiene::gerarPrecoDeVenda() {
    return getPrecoCompra() + (getPrecoCompra() * getPercentualLucro());
}

