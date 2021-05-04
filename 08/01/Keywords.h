#ifndef KEYWORDSIP_H
#define KEYWORDSIP_H

#include <iostream>
#include <fstream>
#include <exception> 
#include <vector>

class Keywords
{
private:
    std::ifstream in;
    std::ofstream out;
    std::vector<std::string> sentence;
public:
    Keywords();
    void abrirArquivo(std::string input_file_name, std::string output_file_name);
    void lerArquivo();
    void gerarArquivo();
    void fecharArquivo();

    //validação
    bool isNumber(std::string s);
    std::vector<std::string> split(const std::string& str, char delim);

};




#endif