/*
 Faça um programa que peça ao usuário para digitar 10 valores e some-os.

*/
#include <stdio.h>
int main(){
    int a[10], i = 0, soma=0;
    while(i < 10){
        printf("Digite o valor de um numero: ");
        scanf("%d", &a[i]);
        i++;
    }
    i = 0;
    while(i < 10){
        soma += a[i];
        i++;
    }
    printf("A soma é: %d", soma);
    return 0;
}