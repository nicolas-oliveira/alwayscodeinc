/*
Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles,
assim como a diferença existente entre ambos.
*/
#include <stdio.h>
int main(){
    int a , b;
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);
    if(a > b){
        printf("%d é maior que %d",a,b);
    }else{
        printf("%d é maior que %d",b,a);
    }
    return 0;
}