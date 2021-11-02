/*
 Faça um programa que leia um número inteiro positivo n e calcule a soma dos n primeiros
números naturais.
*/
#include <stdio.h>
#include <ctype.h>
int main(){
    int i, ultimo, n, soma = 0;
   
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    
    ultimo = (n-1)*2;
    
    for(i = 0; i <= ultimo; i += 2){ //Considerando que 0 é positivo
        soma += i;
    }
    printf("%d", soma);
    return 0;
}