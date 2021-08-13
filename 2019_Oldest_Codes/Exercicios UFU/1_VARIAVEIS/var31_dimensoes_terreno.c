/*
 Faça um programa para ler as dimensões de um terreno (comprimento c e largura l),
 bem como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno
 com tela.
*/
#include <stdio.h>
int main(){
    float c, l, metro_tela;
    printf("Digite o comprimento do terreno: ");
    scanf("%f", &c);
    printf("Digite o valor da largura do terreno: ");
    scanf("%f", &l);
    printf("Digite o valor da cerca por metro do terreno: ");
    scanf("%f", &metro_tela);
    printf("O total do custo é de: %f", (c+l)*metro_tela*2.0);
    return 0;
}