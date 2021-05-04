#define TAMANHO_INICIAL 100

struct ListaVetorInteiros
{
    int *_elementos;
    int _numElementosInseridos;
    int _capacidade;
    //constructor
    ListaVetorInteiros();

    //destructor
    ~ListaVetorInteiros();

    void inserirElemento(int elemento);
    void removerPrimeiro();
    void removerUltimo();
    void inverter();
    void imprimir();
};

