#include "listavetor.h"

using namespace std;

int main() {

    ListaVetorInteiros *l1 = new ListaVetorInteiros();

    for(int i = 1; i <= 3; i++) {
        l1->inserirElemento(i);
    }

    l1->imprimir();

    l1->removerPrimeiro();

    l1->imprimir();

    l1->removerUltimo();

    l1->imprimir();

    l1->inverter();

    l1->imprimir();

    delete l1;

    return 0;
}