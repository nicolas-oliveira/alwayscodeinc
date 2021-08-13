/*
Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá
ser impresso o maior e o menor elemento do vetor.
*/
#include <stdio.h>
int main(){
    int a[10], maior, menor;
    for(int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d",&a[i]);
    }
    maior = a[0];
    menor = a[0];
    for(int i = 0; i < 10; i++){
        if(maior < a[i])
            maior = a[i];
        if(menor > a[i])
            menor = a[i];
    }
    printf("O maior valor:%d\nO menor valor:%d\n", maior, menor);
    return 0;
}
