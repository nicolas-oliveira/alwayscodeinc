/*
Sobre comandos de repetição:
 1• Faça um programa que leia um número inteiro positivo N e imprima todos os números
    naturais de 0 até N em ordem crescente.
    
 2• Faça um programa que leia um número inteiro positivo N e imprima todos os números
    naturais de 0 até N em ordem decrescente.
    
 3• Faça um programa que leia um número inteiro positivo par N e imprima todos os números
    pares de 0 até N em ordem crescente.
    
 4• Faça um programa que leia um número inteiro positivo par N e imprima todos os números
    pares de 0 até N em ordem decrescente.
    
 5• Faça um programa que leia um número inteiro positivo impar N e imprima todos os
    números impares de 1 até N em ordem crescente.

 6• Faça um programa que leia um número inteiro positivo impar N e imprima todos os
    números impares de 1 até N em ordem decrescente.


*/
#include <iostream>
using namespace std;
int main(){
    int n = 0;
    //(1)
    do{
       
        cout << "Digite um valor positivo para N: ";
        cin >> n;
    }while(n <= 0);

    for(int i = 0; i <= n; i++){ 
        cout << i << endl;
    }
    n = 0;
    //(2)
    do{
        cout << "Digite um valor positivo para N: ";
        cin >> n;
    }while(n <= 0);

    for(int i = n; i >= 0; i--){ 
        cout << i << endl;
    }
    n = 0;
    //(3)

    do{
        cout << "Digite um valor positivo e par para N: ";
        cin >> n;
    }while(n % 2 != 0 || n <= 0);

    for(int i = 0; i <= n; i++){ 
        if(i % 2 == 0)
        cout << i << endl;
    }
    n = 0;
    
    //(4)
    
    do{
        cout << "Digite um valor positivo para N: ";
        cin >> n;
    }while(n % 2 != 0 || n <= 0);

    for(int i = n; i >= 0; i--){ 
        if(i % 2 == 0)
            cout << i << endl;
    }
    n = 0;
    
    //(5)
    do{
        cout << "Digite um valor positivo impar para N: ";
        cin >> n;
    }while(n <= 0 || n % 2 == 0);

    for(int i = 1; i <= n; i++){ 
        if(i % 2 != 0)
            cout << i << endl;
    }
    n = 0;
    
    //(6)
    do{
        cout << "Digite um valor positivo impar para N: ";
        cin >> n;
    }while(n <= 0 || n % 2 == 0);

    for(int i = n; i >= 1; i--){ 
        if(i % 2 != 0)
            cout << i << endl;
    }
    return 0;
}