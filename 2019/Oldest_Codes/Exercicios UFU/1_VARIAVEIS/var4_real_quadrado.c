//Leia um numero real e imprima o quadrado desse numero
#include <stdio.h>
#include <iostream>
int main(){
    float a;
    printf("Digite um numero real: ");
    scanf("%f", &a);
    a *= a; // a = a * a
    system("clear");
    printf("%f", a);

    return 0;
}