/*
Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre
o valor calculado.
*/
#include <stdio.h>
int main(){
    int num_hr;
    float valor_hora, valor_pago;
    printf("Valor pago por hora em R$: ");
    scanf("%f", &valor_hora);
    printf("Horas trabalhadas no mês: ");
    scanf("%d", &num_hr);
    valor_pago = (valor_hora * num_hr * (1.1));
    printf("Valor a ser pago R$%f", valor_pago);
    
    return 0;
}