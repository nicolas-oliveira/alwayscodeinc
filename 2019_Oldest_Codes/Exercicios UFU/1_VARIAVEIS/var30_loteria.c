/*
 Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido pro-
 porcionalmente ao valor que cada deu para a realização da aposta. Faça um programa
 que leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um
 ganharia do prêmio com base no valor investido.
*/
#include <stdio.h>
int main(){
    float total, a,b,c, premio;
    printf("Digite o valor da aposta: ");
    scanf("%f", &total);
    printf("Valor da aposta da Pessoa 1: ");
    scanf("%f", &a);
    printf("Valor da aposta da Pessoa 2: ");
    scanf("%f", &b);
    printf("Valor da aposta da Pessoa 3: ");
    scanf("%f", &c);
    if(total == (a + b + c)){
    printf("O valor do premio: ");
    scanf("%f", &premio);
    printf("O valor correspondente e de: \nPara Pessoa 1: %f\nPara a pessoa 2: %f\nPara a Pessoa 3: %f\n", premio*(a/total),premio*(b/total),premio*(c/total));
    }else
        printf("O valor dado nao corresponde ao valor total");
    return 0;
}