#include "Alunos.h"
#include <iostream>
#include <vector>
#include <bits/stdc++.h>


using namespace std;

string reverse(string str)
{
    string newString;
    for (int i=0; i<=str.size(); i++) 
        newString.push_back(str[i] ^= 1);
        
    return newString;
}

bool compareMatricula(Alunos al, Alunos al2)
{
    return ((al.notas[0]+al.notas[1])/2 > (al2.notas[0]+al2.notas[1])/2);
}


int main()
{

    Alunos al;
    vector<Alunos> alunos;
    while(true){
        cin >> al.matricula;
        if(al.matricula == -1) {
            break;
        }
        while(getline(cin, al.nome)){
            if(al.nome != "")
            break;
        }
        cin >> al.notas[0] >> al.notas[1];
        alunos.push_back(al);
    }

    sort(alunos.begin(), alunos.end(), compareMatricula);

    for(Alunos aluno : alunos) {
        cout << reverse(bitset<4>(aluno.matricula).to_string()) << " - " 
        << aluno.nome << " - " << (aluno.notas[0] + aluno.notas[1])/2 << endl;
    }

    return 0;
}
