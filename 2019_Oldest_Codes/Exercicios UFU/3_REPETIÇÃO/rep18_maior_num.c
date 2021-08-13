/*
 Escreva um algoritmo que leia certa quantidade de números e imprima o maior deles e
quantas vezes o maior número foi lido. A quantidade de números a serem lidos deve ser
fornecida pelo usuário.

int i;
for(i=0...);
            //segmentation fault 
for(i=0...);
a) memória que não existe: atribuiu um endereço que não exite e tá tentando acessar ele
b)mudou o endereço de uma variável: usou o & para alterar o endereço da variável
c) ta usando um ponteiro de forma errada, atribuindo um valor reservado pelo sistema
ou pelo próprio código
*/
#include <stdio.h>
int main(){
    int n;
    float a[n], maior, menor;
    printf("Escolha a quantidade de numeros a ser digitada: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("[%d] - Digite um numero: ",i);
        scanf("%f", &a[i]);
    }
    
    
    maior = a[0];
    menor = a[0];
    for(int i = 0; i < n; i++){
        if(maior < a[i])
            maior = a[i];
        else if(menor > a[i])
            menor = a[i];
    }

     for(int i = 0; i < n; i++){
        printf("%.0f\n", a[i]);
    }
        printf("\n%.0f\n%.0f\n", maior, menor);
    return 0;
}