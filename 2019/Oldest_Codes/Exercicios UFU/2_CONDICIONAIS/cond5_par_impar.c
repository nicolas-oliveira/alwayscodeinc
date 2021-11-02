/*
 Faça um programa que receba um número inteiro e verifique se este número é par ou
ı́mpar.
*/
#include <stdio.h>
int main(){
    int a;
    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    if(a % 2 == 0){
        printf("O número é par");
    }else{
        printf("O numero é impar");
    }
    return 0;
}