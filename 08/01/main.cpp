#include "Keywords.h"
#include <fstream>
#include <iostream>


using namespace std;

int main()
{

    Keywords arquivo;
    string nomeArquivo;

    cout << "Digite o nome do arquivo:" << endl;
    
    cin >> nomeArquivo;
    
    try {

        arquivo.abrirArquivo(nomeArquivo, "saida.txt");
    }
    catch(std::ifstream::failure e) {
        cout << e.what();
    }
    arquivo.lerArquivo();

    arquivo.gerarArquivo();

    try {
        
        arquivo.fecharArquivo();
    }
    catch(std::ifstream::failure e) {
        cout << e.what();
    }
       
    

    return 0;
}
