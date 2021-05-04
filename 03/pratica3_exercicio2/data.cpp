#include <iostream>
#include <time.h>
#include <ctime>

#include "data.h"


int getTimeStamp(int dia, int mes, int ano) {

    struct tm y2k = {0};

    time_t rawtime;
    struct tm * timeinfo;

    time ( &rawtime );
    timeinfo = localtime( &rawtime );
    timeinfo->tm_year = ano - 1900;
    timeinfo->tm_mon = mes - 1;
    timeinfo->tm_mday = dia;

    return mktime(timeinfo);
}

Data::Data(int dia, int mes, int ano) {
    std::time_t date = getTimeStamp(dia, mes, ano);
    tm *ltm = std::localtime(&date);

    _dia = ltm->tm_mday;
    _mes = 1 + ltm->tm_mon;
    _ano = 1900 + ltm->tm_year;

}

void Data::getDataSeparadoPorBarra() {
    std::cout << _dia << "/" << _mes << "/" << _ano << std::endl; 
}

void Data::getDataPorExtenso() {
    char meses[12][10] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
    "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    std::cout << _dia << " de " << meses[_mes+1] << " de " << _ano << std::endl; 
}

void Data::getDataEmSegundos() {

    std::cout << getTimeStamp(_dia, _mes, _ano); 
}


