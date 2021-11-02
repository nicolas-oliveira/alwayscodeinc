/*
Faça um procedimento que receba por parâmetro um vetor de registro
contendo nome, idade e sexo de 15 pessoas, e retorna a quantidade de
indivíduos do sexo feminino cuja idade está entre 18 e 35 (inclusive).
*/
#include <iostream>
#include <cctype>
using namespace std;

struct T_pessoa {
    string nome;
    int idade;
    char sexo;
};
/*
char toupper(int s){
    return s > 140 && s < 173 ? s -=40 : s;
}*/

int main(){
    struct T_pessoa pessoa[15];
    
    for(int i = 0; i < 15; i++){
        
        cout << "Digite o nome: ";
        cin >> pessoa[i].nome;
        cout << "Digite a idade: ";
        cin >> pessoa[i].idade;
        
        do {
            cout << "Digite o sexo(M ou F): ";
            cin >> pessoa[i].sexo;
            pessoa[i].sexo = toupper(pessoa[i].sexo);

            system("clear");
        }while(pessoa[i].sexo != 'M' || pessoa[i].sexo != 'F');
    }
    return 0;
}