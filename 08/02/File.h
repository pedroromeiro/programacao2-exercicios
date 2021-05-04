#ifndef FILE_H
#define FILE_H

#include <fstream>
#include <exception> 
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>



class File
{
private:
    std::ifstream in;
    std::ofstream out;
    std::vector<std::string> lines;
public:
    File();
    void abrirArquivo(std::string input_file_name, std::string output_file_name);
    void lerArquivo();
    void gerarArquivo();
    void fecharArquivo();

    std::vector<std::string> split(const std::string& str, char delim);

};




#endif