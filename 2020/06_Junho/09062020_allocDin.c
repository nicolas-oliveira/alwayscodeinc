// 1. Crie um programa que:
// (a) Aloque dinamicamente um array de 5 números inteiros,
// (b) Peça para o usuário digitar os 5 números no espaço alocado,
// (c) Mostre na tela os 5 números,
// (d) Libere a memória alocada.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 5;
    int array[num];

    // (int *) => casting
    int *p = (int *) malloc(num * sizeof(int));
    *p = 0;

    scanf("%d", &*p);
    printf("%li", *p);
    free(p);

    return 0;
}