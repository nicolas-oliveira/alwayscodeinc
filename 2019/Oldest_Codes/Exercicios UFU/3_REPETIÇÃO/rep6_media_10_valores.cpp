/*
 Faça um programa que leia 10 inteiros e imprima sua média.
*/
#include <stdio.h>
int main(){
    int a[10], soma=0;
    for(int i = 0; i < 10; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 10; i++)
        soma += a[i];
    
    printf("A média é no total de %.2f\n", ((float)soma/10.0));
    return 0;

}