#include "ArquivoIP.h"

ArquivoIP::ArquivoIP() {}



void ArquivoIP::abrirArquivo(std::string input_file_name, std::string output_file_name) {
    this->in = std::ifstream(input_file_name, std::ifstream::in);
    this->out = std::ofstream(output_file_name, std::ifstream::out);

    if(!this->in.is_open()) {
        throw std::ifstream::failure("Erro ao abrir stream de entrada");
    }
    if(!this->out.is_open()) {
        throw std::ifstream::failure("Erro ao abrir stream de saída");
    }


}

void ArquivoIP::lerArquivo() {
    
    
    std::string line;
    while ( std::getline(this->in, line) )
    {
        ips.push_back(line);
    }
}



void ArquivoIP::gerarArquivo() {
    this->out << "[Endereços válidos:]" << "\n";
    for(int i = 0; i< ips.size(); i++) {
        std::vector<std::string> splitList = split(ips[i], '.');
        bool valid = true;
        if(splitList.size() != 4) {
            valid = false;
        }
        for (std::string item : splitList){
            if(stoi(item) < 0 || stoi(item) > 255) {
                valid = false;
        
            }
        }

        if(valid == true) {
            this->out << ips[i] << "\n";
        }

    }
    this->out << "[Endereços inválidos:]" << "\n";
    for(int i = 0; i< ips.size(); i++) {
        std::vector<std::string> splitList = split(ips[i], '.');
        bool valid = true;
        if(splitList.size() != 4) {
            valid = false;
        }
        for (std::string item : splitList){
            if(stoi(item) < 0 || stoi(item) > 255) {
                valid = false;
        
            }
        }

        if(!valid) {
            this->out << ips[i] << "\n";
        }

    }
    

}
void ArquivoIP::fecharArquivo() {
    this->in.close();
    this->out.close();

    if(this->in.is_open()) {
        throw std::ifstream::failure("Erro ao fechar stream de entrada");
    }
    if(this->out.is_open()) {
        throw std::ifstream::failure("Erro ao fechar stream de saída");
    }

}

std::vector<std::string> ArquivoIP::split(const std::string& str, char delim){
   auto i = 0;
   std::vector<std::string> list;
   auto pos = str.find(delim);
   while (pos != std::string::npos){
      list.push_back(str.substr(i, pos - i));
      i = ++pos;
      pos = str.find(delim, pos);
   }
   list.push_back(str.substr(i, str.length()));
   return list;
}

bool ArquivoIP::isNumber(std::string s)
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            return false;
 
    return true;
}
