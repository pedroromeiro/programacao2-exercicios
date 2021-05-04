#define TAMANHO_INICIAL 10


struct Aluno
{
    char *_nome;


    int *_notas;
    int _numNotasInseridas;

    int _capacidadeNotas;

    int _matricula;
    double _media_notas;


    //constructor
    Aluno(char *nome, int matricula);

    //destructor
    ~Aluno();

    void adicionarNota(int nota);
    void calcularMediaAluno();
    void imprimeInformacoesAluno();
};

