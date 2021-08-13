/*
Desenvolva um programa que cadastre o nome, a matrícula e duas notas de vários alunos. 
Em seguida imprima matrícula, o nome e a média de cada um deles.
*/

#include <iostream>
using namespace std;
struct T_aluno{
    string nome;
    int matricula;
    float nota[2];
};

int main(){
    int n;

    cout << "Digite a quantidade de alunos: ";
    cin >> n;
    float media[n];
    struct T_aluno aluno[n];

    for(int i = 0; i < n; i++){
        cout << i+1 << " | Nome: ";
        cin >> aluno[i].nome;
        
        cout << i+1 << " | Matrícula: ";
        cin >> aluno[i].matricula;
        
        for(int j = 0; j < 2; j++){
        cout << i+1 << " | Nota " << j+1 <<": ";
        cin >> aluno[i].nota[j];
        media[i] += aluno[i].nota[j];
        }
        media[i] /= 2;
    }

    system("clear");

    for(int i = 0; i < n; i++){
        cout << "Nome: " << aluno[i].nome << endl;
        cout << "Matricula: " << aluno[i].matricula << endl;
        cout << "Media: " << media[i] << endl;
    }
    return 0;
}