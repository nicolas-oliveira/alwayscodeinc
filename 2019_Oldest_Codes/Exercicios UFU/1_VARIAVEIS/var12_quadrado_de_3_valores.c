/* Faca a leitura de tres valores e apresente como resultado a soma dos quadrados dos tres valores obtidos*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    float s, a, b, c;
    
    printf("Digite o valor do primeiro numero: ");
    scanf("%f", &a);
    printf("\e[H\e[2J");
        
    printf("Digite o valor do segundo numero: ");
    scanf("%f", &b);
    printf("\e[H\e[2J");

    printf("Digite o valor do terceiro numero: ");
    scanf("%f", &c);
    
    printf("\e[H\e[2J");
    
    s = a*a + b*b + c*c;
    printf("O soma dos quadrados desses numeros e: %f\n", s);
    
    return 0;
}