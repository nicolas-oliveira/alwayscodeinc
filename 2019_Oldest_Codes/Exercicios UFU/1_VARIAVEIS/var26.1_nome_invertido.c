// Uma funcao que inverta um nome ou string;
#include <stdio.h>
#include <string.h>
#define TAMAX 100
void inverter(char str[TAMAX])
{ 
    for(int i = (strlen(str) - 1); i >= 0; i--)
        printf("%c", str[i]);
}


int main(){
    char string[TAMAX];
    printf("Digite uma frase: ");
    scanf("%[^\n]s", &string); // [^\n] -> para ler espaços
    inverter(string);
    return 0;
}

