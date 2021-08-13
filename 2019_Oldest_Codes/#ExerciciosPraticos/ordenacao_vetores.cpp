/*
Fazer um programa que com vetores receba uma quantidade de um numero de um vetor 
e o outro vetor com os valores ordenados
    3 4 5 6 7

    vetores
    0 0 -nao pode
    0 1
    0 2
    0 3
    0 4



    1 0 
    1 1
    1 2
    1 3
    1 4
    
    2 0
    2 1 
    2 2 -nao pode
    2 3
    2 4

    3 0
    3 1
    3 2
    3 3 -nao pode
    3 4

    4 0
    4 1
    4 2
    4 3
    4 4 -nao pode

*/
    
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int a[5], b[5]; //O primeiro recebe os numeros, o segundo recebe ordenado
    for(int i = 0; i < 5; i++){
        cout << "Digite:";
        cin >> a[i];
    }
    int maior = a[0];
    for (int i = 0; i < 5; i++){
        if(maior < a[i]){
            maior = a[i];
        }
    }
    
    int k = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            
            if(a[i] = a[j]){
                j++;
            }
            if(a[i] > a[j]){
            b[k] = a[i];
            k++;
            }else{
                b[k] = a[j];
            }
        }

    }
        for(int i = 0; i < 5; i++){
        cout << b[i] << ",";
        }
    
    return 0;
}