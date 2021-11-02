/*
 Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima
o vetor, o maior elemento e a posição que ele se encontra.
*/
#include <stdio.h>
int main(){
    int a[10], maior, n;
    for(int i = 0; i < 10; i++)
        scanf("%d",&a[i]);
    maior = a[0];
    for(int i = 0; i < 10; i++){
        if(maior < a[i]){
            maior = a[i];
            n = i;
        }
    }
    printf("O maior elemento é:%d\nEle se encontra na posição %d do vetor", maior, n);
    return 0;
}