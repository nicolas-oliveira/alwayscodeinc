/*
Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
ASCII para resolver o problema.
    33 a 47 Simbolos1
    48 a 57 Numeros
    58 a 64 Simbolos2
    65 a 90 Maiusculas
    97 a 122 Minusculas
    123 a 126 Simbolos3
    127 Delete
*/
#include <stdio.h>
char lower(int letter);
int main(){
    char a;
    printf("Escreva uma letra: ");
    scanf("%c", &a);
    printf("%c", lower(a));

    return 0;
}

char lower(int letter)
{
    return (letter >= 65 && letter <= 90) ? (letter + 32) : (letter);
}