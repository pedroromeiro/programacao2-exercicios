#include "File.h"

File::File() {}



void File::abrirArquivo(std::string input_file_name, std::string output_file_name) {
    this->in = std::ifstream(input_file_name, std::ifstream::in);
    this->out = std::ofstream(output_file_name, std::ifstream::out);

    if(!this->in.is_open()) {
        throw std::ifstream::failure("Erro ao abrir stream de entrada");
    }
    if(!this->out.is_open()) {
        throw std::ifstream::failure("Erro ao abrir stream de saída");
    }


}

void File::lerArquivo() {
    std::string line;
    while ( std::getline(this->in, line) )
    {
        lines.push_back(line);
    }
}



void File::gerarArquivo() {
    std::vector<std::string> nome;
    std::vector<double> gasto;
    double total = 0;

    this->out << "Nro. Funcionario Gasto %" << "\n";
    for(int i = 0; i< lines.size(); i++) {
        std::vector<std::string> splitList = split(lines[i], ' ');


        for (int j = 0; j < splitList.size(); j++) {
            if(j % 2 == 0) {
                nome.push_back(splitList[j]);
            } else {
                std::string charsToRemove = "R$";
                for (char c: charsToRemove) {
                    splitList[j].erase(std::remove(splitList[j].begin(), splitList[j].end(), c), splitList[j].end());
                }
                gasto.push_back(stod(splitList[j]));
            }
        }

    }

    for (double item : gasto) {
        total += item;
    }

    for (int i = 0; i < nome.size(); i++) {
        this->out << i+1 << " " << nome[i] << " R$"
        << std::setprecision(2) << std::fixed << gasto[i] << " " << std::setprecision(0) << std::fixed << std::round(gasto[i]*100/total) << "%" << std::endl;
    }

    this->out << "Gasto mensal total: R$" << std::setprecision(2) << std::fixed << total << "\n";
    this->out << "Gasto médio por funcionário: R$" << std::setprecision(2) << std::fixed << total/nome.size() << "\n";

    
}

    


void File::fecharArquivo() {
    this->in.close();
    this->out.close();

    if(this->in.is_open()) {
        throw std::ifstream::failure("Erro ao fechar stream de entrada");
    }
    if(this->out.is_open()) {
        throw std::ifstream::failure("Erro ao fechar stream de saída");
    }

}

std::vector<std::string> File::split(const std::string& str, char delim){
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
