/*
Faca uma funcao que recebe por parametro um valor inteiro e positivo e retorna o valor logico
verdadeiro caso o valor seja primo e falso em caso contrario
*/
#include <iostream>
using namespace std;
bool verif_primo(int a);
int main(){
    int a;
    cin >> a;
    if(verif_primo(a)){
    cout << "É primo" << endl;
    }else{
        cout << "Não é primo" << endl;
    }
    
    return 0;
}
bool verif_primo(int a){
    for(int n = 2; n < a; n++)
        if(a % n == 0)
            return false;
    return true;
}