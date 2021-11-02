/*
 Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
    • O número digitado ao quadrado
    • A raiz quadrada do número digitado
*/
#include <stdio.h>
#include <math.h>
int main(){
    float a;
    printf("Digite um numero: ");
    scanf("%f", &a);
    if(a>=0){
        printf("Numero ao quadrado: %f\n",(a*a));
        printf("Raiz quadrada do numero: %f\n", sqrt(a));
    }
    return 0;
}