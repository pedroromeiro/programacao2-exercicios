#include <iostream>


using namespace std;

struct Imagem {
int **pixels; // matriz com os pixels da imagem
int nrows; // numero de linhas na imagem ( altura )
int ncolumns; // numero de colunas na imagem ( largura )
};

void leImagem(Imagem &im) {
    string s;
    getline(cin, s);
    //somente para ignorar o primera linha

    cin >> im.ncolumns >> im.nrows;
    //pega no numero de columas e linhas na respectiva ordem que
    //está no .bpm

    //cria um vetor de ponteiros com o tamanho de linhas (nrows)
    im.pixels = new int*[im.nrows];

    for(int i = 0; i < im.nrows; i++) {
        //seta cada linha um vetor de ncolumns posicoes
        im.pixels[i] = new int[im.ncolumns];
    }

    for(int i = 0; i < im.nrows; i++) {
        for(int j = 0; j < im.ncolumns; j++) {
            //le os pixels da imagem
            cin >> im.pixels[i][j];
        }
    }


    return;
}
    

void inverteCorImagem(Imagem &im) {
    //inverte os pixels, basicamente se é 1 vai pra 0 
    //e se é 0 vai pra 1
    for(int i = 0; i < im.nrows; i++) {
        for(int j = 0; j < im.ncolumns; j++) {
            if(im.pixels[i][j] == 1) im.pixels[i][j] = 0;
            else im.pixels[i][j] = 1;
        }
    }
    return;
}

void imprimeImagem(Imagem &im) {
    cout << "P1" << endl;

    cout << im.ncolumns << " " << im.nrows << endl;

    for(int i = 0; i < im.nrows; i++) {
        for(int j = 0; j < im.ncolumns; j++) {
            //imprime a matriz, verica se a posição de j é a ultima posição da
            //colunas, se sim, quebra linha
            cout << im.pixels[i][j] << ((j == im.ncolumns -1) ? "\n" : " ");
        }
    }

    return;
}

void deletaImagem(Imagem &im) {
    for(int i = 0; i < im.nrows; i++) {
        //seta cada linha um vetor de ncolumns posicoes
        delete[] im.pixels[i];
    }
    delete[] im.pixels;
    return;
}

int main () {
    Imagem im;
    leImagem(im);
    inverteCorImagem(im);
    imprimeImagem(im);
    deletaImagem(im);
return 0;
}