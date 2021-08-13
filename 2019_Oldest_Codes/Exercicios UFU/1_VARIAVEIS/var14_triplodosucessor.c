/*Leia um numero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.
sucessor (a + 1)
antecessor (b - 1)
triplo 3x 
dobro 2x
(3x +1) + (2x -1)
*/
#include <stdio.h>
int main(){
    int a, b, x;

    printf("Digite um número: ");
    scanf("%d", &x);
    a = ((3*x) + 1);
    b = ((2*x) - 1);
    printf("%d e %d", a, b);

    return 0;
}