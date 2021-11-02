/*
Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.

*/
#include <stdio.h>
int main(){
    int a[10], par = 0;
    for(int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 10; i++){
        if(a[i]%2 == 0)
            par++;
    }
    printf("Existem %d valores pares nesse conjunto.", par);
    return 0;
}