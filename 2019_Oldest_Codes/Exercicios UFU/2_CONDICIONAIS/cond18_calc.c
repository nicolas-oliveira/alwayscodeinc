/*
 Faça um programa que mostre ao usuário um menu com 4 opções de operações ma-
temáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu pro-
grama então pede dois valores numéricos e realiza a operação, mostrando o resultado e
saindo.
*/
#include <stdio.h>
int main(){
    float num1,num2;
    char a;
    do{
    printf("Operações matematicas\nEscolha uma operação(+,-,*,/):");
    scanf("%c",&a);
    printf("\e[H\e[2J");
    }while(a != '+' && a != '*' && a != '-' && a != '/' );
    
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf("%f", &num2);
    
    switch(a)
    {
    case '+':
    printf("%.1f+%.1f=%.2f",num1,num2,num1+num2);
        break;

    case '-':
    printf("%.1f-%.1f=%.2f",num1,num2,num1-num2);
        break;

    case '*':
    printf("%.1f*%.1f=%.2f",num1,num2,num1*num2);
        break;
    
    case '/':
    printf("%.1f/%.1f=%.2f",num1,num2,num1/num2);
        break;
    
    default:
    printf("Erro");
        break;
    }
    
    return 0;
}