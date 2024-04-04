/*
Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
*/
#include <stdio.h>
int main(){
    int a[6],i = 0;
    while(i < 6){
        printf("Digite um numero: ");
        scanf("%d", &a[i]);
        i++;
    }
    i = 0;
    while (i < 6){
        printf("%d\n",a[i]);
        i++;
    }
    
    return 0;
}