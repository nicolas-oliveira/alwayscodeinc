/* Leia um valor de comprimento em polegadas e apresente-o convertido em centimetros
A formula de conversao e: C = P*2,54, sendo C o comprimento em centímetros e P o comprimento em polegadas.
*/
#include <stdio.h>
int main(){
    float c, p;
    
    printf("Digite o valor em polegadas: ");
    scanf("%f", &p);
    c = p * 2.54;
    printf("O valor em centímetros e: %f", c);
    return 0;
}