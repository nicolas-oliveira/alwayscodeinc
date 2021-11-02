/*
Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois va-
lores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa
deverá escrever a soma dos valores encontrados nas respectivas posições X e Y
*/
#include <stdio.h>
int main(){
    int vet[8],soma;
    printf("Digite um numero: ");
    scanf("%d", &vet[0]);
    printf("Digite outro numero: ");
    scanf("%d", &vet[1]);
    
    soma = vet[0] + vet[1];
    printf("Soma: %d", soma);

    return 0;
}