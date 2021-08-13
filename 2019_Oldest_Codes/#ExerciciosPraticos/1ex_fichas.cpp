#include <iostream>
using namespace std;
int main(){
    int n=3, num_mat[n], nota[n], maiorn, menorn, p1, p2;
    char sexo[n];
    for (int i =0;i<n; i++){
    cout <<"Digite o numero de matrícula: ";
    cin >> num_mat[i];
    cout << "Digite o sexo do aluno(M ou F): ";
    cin >> sexo[i];
    cout << "Digite a nota do aluno: ";
    cin >> nota[i];
    }
    maiorn = nota[0];
    menorn = nota[0];
    for (int i =0;i<n; i++){
        for (int j =0;j<n; j++){
            if(nota[i] > maiorn){
            maiorn = nota[i];
            p1 = i;
            }else if(nota[i] < menorn){
            menorn = nota[i];
            p2 = i;
            }
      }
    }
    cout << "Maior nota: "<< maiorn << endl;
    cout << "Sexo: " << sexo[p1] << endl;
    cout <<"Numero matricula: " <<num_mat[p1] << endl;
    cout <<"Menor nota: "<< menorn << endl;
    cout << "Sexo: " << sexo[p2] << endl;
    cout <<"Numero matricula: " <<num_mat[p2] << endl;
    return 0;
}