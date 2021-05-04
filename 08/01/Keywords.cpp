#include "Keywords.h"

Keywords::Keywords() {}



void Keywords::abrirArquivo(std::string input_file_name, std::string output_file_name) {
    this->in = std::ifstream(input_file_name, std::ifstream::in);
    this->out = std::ofstream(output_file_name, std::ifstream::out);

    if(!this->in.is_open()) {
        throw std::ifstream::failure("Erro ao abrir stream de entrada");
    }
    if(!this->out.is_open()) {
        throw std::ifstream::failure("Erro ao abrir stream de saída");
    }


}

void Keywords::lerArquivo() {
    std::string line;
    while ( std::getline(this->in, line) )
    {
        sentence.push_back(line);
    }
}



void Keywords::gerarArquivo() {
    this->out << "Palavras-chave: ";
    std::vector<std::string> palavrasRepetidas;
    for(int i = 0; i< sentence.size(); i++) {
        std::vector<std::string> splitList = split(sentence[i], ' ');

        for(int a = 0; a< splitList.size(); a++) {
            for(int b = 0; b< splitList[a].size(); b++) {
                if(splitList[a][b] == '.') {
                    splitList[a].erase(b);
                }
        
            }
        
        }

        for (std::string i : splitList){
            int count = 0;
            
            

            for (std::string j : splitList){
                if (i == j) {
                    count++;
                }
            }
            if(count >= 2) {
                bool encontrada = false;
                for(std::string pala : palavrasRepetidas) {
                    if(i == pala) encontrada= true;
                }
                if(encontrada == false) {
                    palavrasRepetidas.push_back(i);
                }
            }

        }
    }

    for(int i = 0; i < palavrasRepetidas.size(); i++) {
        if(i == 0) {
            this->out << palavrasRepetidas[i];
        } else {
            this->out << ", " << palavrasRepetidas[i];
        }
    }

    

}
void Keywords::fecharArquivo() {
    this->in.close();
    this->out.close();

    if(this->in.is_open()) {
        throw std::ifstream::failure("Erro ao fechar stream de entrada");
    }
    if(this->out.is_open()) {
        throw std::ifstream::failure("Erro ao fechar stream de saída");
    }

}

std::vector<std::string> Keywords::split(const std::string& str, char delim){
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

bool Keywords::isNumber(std::string s)
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            return false;
 
    return true;
}
