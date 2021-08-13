/*
 Leia uma string e mostre seu tamanho, imprima ela, depois ao contrário
 com apenas a bib <stdio.h> 
*/
#include <stdio.h>
#define SIZE 80
int main(){
    int tam;
    char string[SIZE];
    printf("Escreva alguma coisa meu consagrudo: ");
    scanf("%[^\n]s", &string);
    printf("%s\n", string);

    for(tam = 0; string[tam]; tam++);
    printf("%d\n", tam);

    for(int i = tam; i >= 0; i--)
    printf("%c", string[i]);

    return 0;
}