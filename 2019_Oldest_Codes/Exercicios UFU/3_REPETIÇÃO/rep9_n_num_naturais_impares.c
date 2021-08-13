/*
 Faça um programa que leia um número inteiro N e depois imprima os N primeiros
números naturais impares.
*/
#include <stdio.h>
int main(){
    int i = 0, n;
    
    printf("Digite a quantidade de números: ");
    scanf("%d", &n);
    
    int a[n];
    
    for(i = 0; i < n; i++){
        a[i] = i;
    }
    
    i = 0;
    while(i < n){
        if(a[i] >= 0 && (a[i] % 2) != 0){
            printf("%d\n", a[i]);
            i++;
        }else{
            i++;
        }   
    }
    return 0;
}