#include "ArquivoIP.h"
#include <fstream>


using namespace std;

int main()
{

    ArquivoIP ip;
    
    try {
        ip.abrirArquivo("ips.txt", "saida.txt");
    }
    catch(std::ifstream::failure e) {
        cout << e.what();
    }
    ip.lerArquivo();

    ip.gerarArquivo();

    try {
        
        ip.fecharArquivo();
    }
    catch(std::ifstream::failure e) {
        cout << e.what();
    }
       
    

    return 0;
}
