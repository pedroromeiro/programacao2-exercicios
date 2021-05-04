#include "PosicoesVetor.h"
#include <iostream>

int main () 
{
    int y = 0;

    std::cout << "Digite o tamanho do vetor: " << std::endl;
    std::cin >> y;

    PosicoesVetor v1 = PosicoesVetor(y);

    try
    {
        v1.popularVetor();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    
    
   
}