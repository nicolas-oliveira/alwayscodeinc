/*
Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, conside-
rando números maiores que 0.
*/
#include <stdio.h>
int main(){
    int a = 3, i=1;
    while((int) i <= 5){
        printf("%d : %d\n", i, a*i);
        i++;
    }
    return 0;
}
