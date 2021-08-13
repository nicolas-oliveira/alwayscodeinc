/*
 Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz
quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o
número é inválido.

*/
#include <stdio.h>
int main(){
    int a;
    printf("Digite um numero: ");
    scanf("%d",&a);
    if(a >= 0){
        a *= a;
        printf("Sua raiz quadrada é: %d",a);
    }else if(a < 0){
        printf("O numero é inválido");
    }
    return 0;
}