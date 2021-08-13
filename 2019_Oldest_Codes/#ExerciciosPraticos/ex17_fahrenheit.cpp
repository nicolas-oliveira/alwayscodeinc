// Leia uma temperatura em graus Celsius e apresente a convertida em graus Fahrenheit.
// A formula eh: F = C*(9.0/5.0) + 32.0

#include <stdio.h>
int main(){
        float c, f = 0;
    
    printf("Digite a temperatura em C: ");
    scanf("%f", &c);
    
       f = (c*(9.0/5.0) + 32.0);
    
    printf("A temperatura em Fahrenheit: %f", &f);

    return 0;
    
}