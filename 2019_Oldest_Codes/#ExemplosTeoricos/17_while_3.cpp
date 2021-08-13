/* Fazer um programa que imprima numeros de 0 a 10 duas vezes cada numero
*/
#include <iostream>
using namespace std;
int main(){
    int n = 0;
    while(n <= 10){
        int i = 0; // A variavel OBRIGATORIAMENTE deve ser inicializada dentro do while para sempre voltar a 0
        while(i < 2){
            cout << "Numero: " << n << endl;
            i++;
        }
        n++;    
    }
    return 0;
}