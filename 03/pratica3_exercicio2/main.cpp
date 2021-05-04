#include "data.h"
#include <iostream>

using namespace std;

int main() {

    Data data(5, 3, 2021);

    data.getDataSeparadoPorBarra();
    data.getDataPorExtenso();
    data.getDataEmSegundos();


    return 0;
}