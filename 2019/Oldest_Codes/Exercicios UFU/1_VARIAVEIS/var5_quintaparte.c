//Leia um numero real e imprima a quinta parte deste numero
#include <iostream>
#include <stdio.h>

int main(){
    float a;
    printf("Escreva um numero real: ");
    scanf("%f", &a);
    a = (a / 5);
    system("clear");
    printf("%f", a);
    return 0;
}