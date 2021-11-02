/*
Escreva um algoritmo que leia um número inteiro entre 100 e 999 e imprima na saida
cada um dos algarismos que compõem o número
*/
#include <stdio.h>
int main(){
    int i = 0, n, m, a[3];
    printf("Digite um valor entre 100 e 999: ");
    scanf("%d", &n);
    
    if(n >= 100 && n <= 999){
        while(n){
        m = n;
        m %= 10;
        n /= 10;
        a[i] = m;
        i++;
        }
    }
    
    for(i=2; i>=0;i--){
        printf("%d\n", a[i]);
    }  
    return 0;
}