#include <iostream>
#include "Remedio.h"
#include "ArtigoHigiene.h"

using namespace std;


int main() {
    Remedio paracetamol(1, "Paracetamol - Dores no corpo", 6.00, 0.1, 1.00);
    Remedio insulina(2, "Insulina - Hormônio sintético para diabéticos", 3.00, 0.3, 2.00);

    ArtigoHigiene desodorante(3, "Rexona, 180ml", 10.00, 0.3);
    ArtigoHigiene cremeDetal(4, "Oral-B sensitive", 3.00, 0.3);

    cout << "=======REMÉDIOS=======" << endl;
    cout << "Código: " << paracetamol.getCodigo() << endl;
    cout << "Descrição: " << paracetamol.getDescricao() << endl;
    cout << "Custo: R$" << paracetamol.getPrecoCompra() << endl;
    cout << "Percentual lucro: " << paracetamol.getPercentualLucro() * 100 << "%" << endl;
    cout << "Desconto do laboratório: R$" << paracetamol.getDescontoLab() << endl;
    cout << "===========" << endl;
    cout << "Preço de venda: R$" << paracetamol.gerarPrecoDeVenda() << endl;
    cout << "======================" << endl;

    cout << "Código: " << insulina.getCodigo() << endl;
    cout << "Descrição: " << insulina.getDescricao() << endl;
    cout << "Custo: R$" << insulina.getPrecoCompra() << endl;
    cout << "Percentual lucro: " << insulina.getPercentualLucro() * 100 << "%" << endl;
    cout << "Desconto do laboratório: R$" << insulina.getDescontoLab() << endl;
    cout << "===========" << endl;
    cout << "Preço de venda: R$" << insulina.gerarPrecoDeVenda() << endl;

    cout << endl << "=======ARTIGOS DE HIGIENE=======" << endl;
    cout << "Código: " << desodorante.getCodigo() << endl;
    cout << "Descrição: " << desodorante.getDescricao() << endl;
    cout << "Custo: R$" << desodorante.getPrecoCompra() << endl;
    cout << "Percentual lucro: " << desodorante.getPercentualLucro() * 100 << "%" << endl;
    cout << "===========" << endl;
    cout << "Preço de venda: R$" << desodorante.gerarPrecoDeVenda() << endl;
    cout << "======================" << endl;

    cout << "Código: " << cremeDetal.getCodigo() << endl;
    cout << "Descrição: " << cremeDetal.getDescricao() << endl;
    cout << "Custo R$: " << cremeDetal.getPrecoCompra() << endl;
    cout << "Percentual lucro: " << cremeDetal.getPercentualLucro() * 100 << "%" << endl;
    cout << "===========" << endl;
    cout << "Preço de venda: R$" << cremeDetal.gerarPrecoDeVenda() << endl;




    return 0;
}