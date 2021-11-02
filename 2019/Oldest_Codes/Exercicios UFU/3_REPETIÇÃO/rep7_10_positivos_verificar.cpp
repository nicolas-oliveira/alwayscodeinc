/*
 Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua
média.
*/
#include <stdio.h>
int main(){
    int a[10], soma = 0, neg_cont = 0;
    for(int i =0; i<10; i++){
        printf("Digite um numero positivo: ");
        scanf("%d", &a[i]);
    }
    for(int i =0; i<10; i++){
        if(a[i] >= 0 ){
            soma += a[i];
        }else{
            neg_cont++;
        }
    }
    printf("A média (sem numeros negativos) é: %.2f", ((float)soma /(10 - neg_cont) ));
    return 0;
}