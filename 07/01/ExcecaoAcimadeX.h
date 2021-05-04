#ifndef INF_112_EXCECAOACIMADEX_H
#define INF_112_EXCECAOACIMADEX_H

class ExcecaoAcimaDeX : public std::exception   
{
public:
   virtual const char* what() const noexcept override;
};

const char* ExcecaoAcimaDeX::what() const noexcept
{
    return "Valor excedente ao máximo permitido da soma";
}

#endif