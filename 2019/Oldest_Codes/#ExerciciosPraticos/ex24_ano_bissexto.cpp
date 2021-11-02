/* 
Escrever um programa que determine se um ano é bissexto.
Um ano é bissexto quando é multiplo de 4 (por exemplo, 1984).
No ententanto, os anos múltiplos de 100 somente são bissextos, quando, por sua vez, são múltiplos de 400
(por exemplo, 1800 não é bissexto, enquanto 2000 é).
*/
#include <iostream>
using namespace std;
int main(){
    int year;
    cout << "Digite o valor inteiro referente a um ano: ";
    cin >> year;
    
    if (year % 4 == 0){
        if (year % 100 == 0 && year % 400 == 0){
            cout << "É um ano bissexto";
        }else{
            cout << "Não é um ano bissexto";
        }
    }else{
        cout << "Não é um ano bissexto";
    }
    
    return 0;
}