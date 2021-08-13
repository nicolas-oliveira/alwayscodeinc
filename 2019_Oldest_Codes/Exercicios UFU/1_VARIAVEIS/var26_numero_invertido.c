/*
    Faça um programa que leia um número inteiro positivo de três dı́gitos (de 100 a 999).
    Gere outro número formado pelos dı́gitos invertidos do número lido. Exemplo:
        NúmeroLido = 123
        NúmeroGerado = 321
*/
#include <stdio.h>
int main()
{
    char num[3];
    printf("Digite um numero de 3 digitos: ");
    scanf("%s", &num);
    for(int i = 3; i >= 0; i--){
        printf("%c",num[i]);
    }
    return 0;
}