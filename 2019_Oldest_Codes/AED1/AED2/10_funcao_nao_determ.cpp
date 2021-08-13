/*Faça um funcao que recebe um valor nao determinado de valores positivos e retorne 
a média aritimética dos mesmos */
#include <iostream>
using namespace std;
float media(){
    int i = 0;
    float soma = 0, a;
    do{
        cin >> a;
        soma += a;
        i++;
    }while(a != 0);
    return soma/i;
}

int main(){
    int a;
    cout << "Para sair digite 0" << endl;

    cout << media();
    return 0;
}