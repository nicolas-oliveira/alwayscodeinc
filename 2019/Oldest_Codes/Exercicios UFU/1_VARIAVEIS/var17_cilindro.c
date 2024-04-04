/* Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro
V = pi*raio^2*altura
*/
#include <stdio.h>
int main (){
    float v, r, h;
    printf("Digite o valor do raio: ");
    scanf("%f",&r);
    printf("Digite o valor da altura: ");
    scanf("%f",&h);
    v = (3.141592)*r*h;
    printf("%f", v);
    return 0;
}