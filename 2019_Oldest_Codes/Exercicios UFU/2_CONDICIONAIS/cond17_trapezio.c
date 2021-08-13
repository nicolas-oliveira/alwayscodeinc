/*
 Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
(basemaior + basemenor) ∗ altura
A = ((basemaior + basemenor) * altura) / 2
Lembre-se a base maior e a base menor devem ser números maiores que zero.
*/
#include <stdio.h>
int main(){
    float b_maior, b_menor, a, alt;
    do{
    printf("Digite o valor da base maior: ");
    scanf("%f",&b_maior);
    printf("Digite o valor da base menor: ");
    scanf("%f",&b_menor);
    }while(b_maior <= 0 || b_menor <= 0);
    printf("Digite o valor da altura: ");
    scanf("%f",&alt);
    a = ((b_maior+b_menor)*alt) / 2.0;
    printf("O valor da area é de: %.2f",a);
    return 0;
}