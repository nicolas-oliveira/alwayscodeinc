/*
 Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor
lido.
*/
#include <stdio.h>
int main(){
    int a[10], i=0, maior, menor;
    while(i < 10){
        printf("Digite um numero: ");
        scanf("%d",&a[i]);
        i++;
    }
    i=0;
    maior = a[0];
    menor = a[0];
    while(i < 10){
        if(menor > a[i])
            menor = a[i];
        if(maior < a[i])
            maior = a[i];
    i++;
    }
    printf("O maior valor: %d\nO menor valor: %d\n", maior, menor);
    return 0;
}