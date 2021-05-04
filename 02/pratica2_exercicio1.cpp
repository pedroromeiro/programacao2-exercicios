#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

void imprime(vector<int> &vetor) {
    for(int i = 0; i < vetor.size(); i++) {
        //verifica se está na ultima posicao do vetor, se estiver então quebra a linha
        cout << vetor[i] << ((i == vetor.size() - 1) ? ",\n" : ", ");
    }

    return;
}

void preencheAleatorios(vector<int> &vetor) {
    for(int i = 0; i < vetor.size(); i++) {
        vetor[i] = rand() % 10;
    }

    return;
}

void contaParImpar(vector<int> &vetorA, vector<int> &vetorB, int n) {
    int pares = 0;

    //levando em consideração que um número natural só pode ser par ou impar,
    //sabendo o total de números pares ou ímpares mais a quantidade total de
    //números, consigo determinar a quantidade de ambos.
    for(int i = 0; i < n; i++) {
        if((vetorA[i] + vetorB[i]) % 2 == 0) pares++;
    }
    cout << "Par: " << pares << endl;
    cout << "Ímpares: " << n - pares << endl;

    return;
}


int main() {

    int size = 0;
    vector<int> *vetorA = new vector<int>();
    vector<int> *vetorB = new vector<int>();

    while(size >= 0) {



        cout << "Digite a quantidade de jogadas a simular: ";
        cin >> size;

        if(size < 0) break;

        vetorA->resize(size);
        vetorB->resize(size);
        preencheAleatorios(*vetorA);
        preencheAleatorios(*vetorB);
 
        imprime(*vetorA);
        imprime(*vetorB);

        contaParImpar(*vetorA, *vetorB, size);

    }


    delete vetorA;
    delete vetorB;


    return 0;
}