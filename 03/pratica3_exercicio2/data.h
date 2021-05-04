#define TAMANHO_INICIAL 100


struct Data
{
    int _dia;
    int _mes;
    int _ano;
    //constructor
    Data(int dia, int mes, int ano);


    void getDataEmSegundos();
    void getDataSeparadoPorBarra();
    void getDataPorExtenso();
};

