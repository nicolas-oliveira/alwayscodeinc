/*
 Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na tela os valores
lidos na ordem inversa.
*/
#include <stdio.h>
int main(){
    int a[6], b[6];
    for(int i = 0; i < 6; i++)
        scanf("%d", &a[i]);
        
    for(int i = 5; i >= 0; i--){
        if(a[i] % 2 == 0)
            printf("\n%d\n", a[i]);
    }
    return 0;
}
