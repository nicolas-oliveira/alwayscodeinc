/* Sejam a e b catetos de um triangulo, onde a hipotenusa é obtida pela equação:
hipotenusa = (a^2 + b^2)^(1/2)
Faça um programa que receba os valores de a e b e calcule o valor da hipotenusa atraves
da equação. Imprima o resultado dessa operação.
*/

#include <stdio.h> //printf
#include <math.h> // pow e sqrt
int main(){
    float hip, a, b, t;
    printf("Digite o valor do cateto 'a': ");
    scanf("%f", &a);
    printf("\e[H\e[2J");
    printf("Digite o valor do cateto 'b': ");
    scanf("%f", &b);
    printf("\e[H\e[2J");
    /*
    t = (a*a) + (b*b);
    printf("%f\n", t);
    hip = pow(t, 0.5);
    printf("%f\n", hip);
    */
    printf("O valor da hipotenusa e: %f", sqrt((a*a) + (b*b)));

    return 0;
}