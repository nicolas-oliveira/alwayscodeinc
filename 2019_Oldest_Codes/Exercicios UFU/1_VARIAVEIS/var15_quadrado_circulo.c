/* Leia um número e imprima o valor do quadrado e após leia o valor do raio e imprima a área do círculo corresp
pi * raio
pi = 3.141592
*/
#include <stdio.h>

int main(){
    float l, a, r, ac, pi;
    printf("Digite o lado do quadrado: ");
    scanf("%f", &l);
    printf("Digite o raio do círculo: ");
    scanf("%f", &r);
    pi = 22/7;
    a = l * l;
    ac = pi * r;

    printf("A area do quadrado e a area do circulo e: %f, %f", a, ac);
    
    return 0;
}