/*1 - Escreva uma programa em C++, que receba o nome (vetor de caracteres - string), e
idade (int) de 4 pessoas. Depois verifique suas idades e imprima na tela:
Do mais velho para o mais novo (nome e idade);
Do mais novo pro mais velho;
Verifique se algum deles tem idade igual;
Verifique se a idade é válida;
○ Caso a idade não seja Valida, imprima o erro(exemplo: sua idade não pode
ser < zero), e o nome da pessoa cuja a idade não é valida.*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    string name[4];
    int i, old[4];
    for(i = 0; i < 4; i++){
        cout << "Nome " << i + 1 << ": "; //Printa na tela conforme a ordem e recebe o nome e idade
        cin >> name[i];
        cout << "Idade " << i + 1 << ": ";
        cin >> old[i];
        system("clear");
        if(old[i] <= 0){
            cout << "A idade é inválida" << endl;
        }
    }
    for(i = 0; i < 4; i++){
        if(old[i] > old[i+1]){
            cout << name[i] << ": " << old[i] << endl;
        }else{
            if(i < 4){
             cout << name[i+1] << ": " << old[i+1] << endl;
            }
        }
    }      
    return 0;
}