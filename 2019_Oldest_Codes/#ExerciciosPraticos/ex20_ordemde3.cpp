//Faca um programa que leia 3 numeros inteiros e diga o maior, segundo maior e o menor
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite um numero: ");
    scanf("%d", &b);
    printf("Digite um numero: ");
    scanf("%d", &c);
    if(a > b && a > c){
        if(b > c){
            printf("%d > %d > %d", a, b, c);
        }else{
            printf("%d > %d > %d", a, c, b);
        }
    }
    if(b > a && b > c){
        if(a > c){
            printf("%d > %d > %d", b, a, c);
        }else{
            printf("%d > %d > %d", b, c, a);
        }
    }
    if(c > a && c > b){
        if(b > a){
            printf("%d > %d > %d", c, b, a);
        }else{
            printf("%d > %d > %d", c, a, b);
        }
    }
    return 0;
}