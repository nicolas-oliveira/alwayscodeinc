/*
Leia um número inteiro de 4 digitos (de 1000 a 9999) e imprima 1 dı́gito por linha.
*/
#include <stdio.h>
#include <string.h>
int main(){
    int i = 0;
    char str[4];
    printf("Digite um número de 4 digitos: ");
    scanf("%[^\n]s", &str);
    while(str[i]){
        printf("%c\n", str[i]); //Lembrar de usar %c e não %s pois é cada caracter e não tudo
        i++;
    }
    return 0;
}