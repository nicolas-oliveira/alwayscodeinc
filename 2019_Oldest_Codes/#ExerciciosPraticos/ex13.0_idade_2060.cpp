//Leia o ano atual e o ano de nascimento, calcule e imprima a idade atual e em 2060
#include <iostream>
#include <stdio.h>

using namespace std;
int main(){    
    int at, an, id, idf;
    printf("Ano atual: ");
    scanf("%d", &at);
    printf("Ano de nascimento: ");
    scanf("%d", &an);
    
    id = (at - an);
    idf = (2060 - an);
    
    printf("\n");
    printf("Idade atual: %d\n", id);
    printf("Idade em 2060: %d\n", idf);
    printf("Ano atual: %d\n", at);
    printf("Ano de nascimento: %d\n", an);
    return 0;
}