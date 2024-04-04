/*
 Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
inválido”. Se o número for positivo, calcular o logaritmo deste numero.
*/
#include <stdio.h>
#include <math.h> //log()
int main(){
    int a;
    printf("Digite um numero: ");
    scanf("%d", &a);
    if(a){
        printf("Logaritmo: %.2f", log(a));
    }else{
        printf("Numero invalido");
    }
    return 0;
}