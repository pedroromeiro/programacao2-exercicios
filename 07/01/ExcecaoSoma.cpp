#include "ExcecaoSoma.h"
#include "ExcecaoAcimadeX.h"

Excecaosoma::Excecaosoma()
{
    double x = 0;
    int y = 0;

    std::cout << "Digite o valor maximo: " << std::endl;
    std::cin >> x;
    
    if ( std::cin.fail() )
    {
        throw std::out_of_range ("Invalid input, type a number");
    }

    if (x > 100 || x <= 0)
    {
        throw std::out_of_range ("Type a value in the format: (0, 100]");
    }
 
    std::cout << "Digite o numero de entradas: " << std::endl;
    std::cin >> y;
    
    this->_x = x;
    this->_y = y;
    _v[0] = 0;   
}

void Excecaosoma::somar()
{
    double j = 0;
    double soma = 0;

    for (int i = 0; i < _y; i++)
    {
        std::cout << "Digite o valor: " << std::endl;
        std::cin >> _v[i];

        if (_v[i] <= 0)
        {
            throw std::out_of_range ("Inavlid Value");
        }
        

        if (soma + _v[i] > _x)
        {
            throw (ExcecaoAcimaDeX());
            break;
        }


        soma = soma + _v[i];
        j++;  
    }
    
    double media = soma / j;
    
    std::cout << "O valor informado e: " << _x << std::endl;
    std::cout << "Soma: " << soma << std::endl;
    std::cout << "Foram informados " << j <<" valores" << std::endl;
    std::cout << "Media: " << media << std::endl;
}
