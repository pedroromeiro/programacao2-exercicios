#include "ExcecaoSoma.h"

int main()
{
    

    try
    {
        Excecaosoma ex ;
        ex.somar();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    
    
    return 0;
}