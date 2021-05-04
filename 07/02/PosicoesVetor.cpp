#include "PosicoesVetor.h"
#include <iostream>

PosicoesVetor::PosicoesVetor(int y)
{
    this->_y = y;
    _vetor = new int[y];
}

PosicoesVetor::~PosicoesVetor()
{
    delete[] _vetor;
}

bool PosicoesVetor::isNumber(std::string s)
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            return false;
 
    return true;
}

void PosicoesVetor::popularVetor()
{
    std::string position, value;

    for (int i = 0; i < _y; i++)
    {
        
        std::cout << "Digite a posicao desejada" << std::endl;
        std::cin >> position;

        if(!isNumber(position)) {
            throw std::invalid_argument("Position is not a valid number");
        }

        if (std::stoi(position) > _y || std::stoi(position) < 0)
        {
            throw std::out_of_range("Invalid position");
        }

        
 

        std::cout << "Digite o valor desejado" << std::endl;
        std::cin >> value;
       
        if(!isNumber(value)) {
            throw std::invalid_argument ("Value is not a number");
        }

       
        
        
        _vetor[std::stoi(position)-1] = std::stoi(value);
       
    } 

}
