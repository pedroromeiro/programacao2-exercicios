#include "File.h"
#include <fstream>
#include <iostream>


using namespace std;

int main()
{

    File arquivo;
    string nomeArquivo;

    
    try {

        arquivo.abrirArquivo("funcionarios.txt", "relatorio.txt");
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
