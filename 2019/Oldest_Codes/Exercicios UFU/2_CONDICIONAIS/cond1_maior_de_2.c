/*
 Faça um programa que receba dois números e mostre qual deles é o maior. 
7(Conferir lista) - Se por acaso, os dois números forem iguais, imprima a mensagem Números iguais.
*/
#include <stdio.h>

int main(){
    int a, b;
    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite outro numero: ");
    scanf("%d", &b);
    if(a > b){
        printf("%d é o maior", a);
    }else if(b > a){
        printf("%d é o maior", b);
    }else{
        printf("%d e %d sao iguais", a, b);
    }
    return 0;
}