/*
Uma empresa contrata um encanador a R$30.00 por dia. Faca um programa que solicite
o numero de de dias trabalhados pelo encandor e imprima a quantia liquida que devera
ser paga, sabendo-se que sao descontados 8% para imposto de renda.
*/
#include <stdio.h>
int main(){
    int dias;
    float valor;
    printf("Digite a quantidade de dias solicitados: ");
    scanf("%d", &dias);
    valor = (dias * 30.00) * (0.92);
    printf("%f", valor);
    return 0;
}