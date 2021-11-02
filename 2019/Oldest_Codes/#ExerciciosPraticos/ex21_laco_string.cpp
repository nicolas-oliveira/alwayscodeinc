// Um programa que lê dois numeros mas pergunta se o usuario quer somar ou multiplicar e faça apenas a operação
// escolhida
#include <iostream>
#include <cctype>
using namespace std;
int main(){
    {
        char esc; // esc = escolha
        do {
            cout << "Escreva S ou s para sair, \n qualquer outra tecla para continuar: ";
            cin.get(esc);
            esc = toupper(esc);
            
            if(esc != '\n'){
               cin.ignore();
            }
            if(esc != 'S'){
               cout << "Deseja continuar? \n";
            }else{
                cout << "Saindo..";
            }
        } while (esc != 'S');
        
    }
    return 0;
}