/*
 Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
*/
#include <stdio.h>
#define NUM_PAR 10 
int main(){
    int i, soma = 0, n = 0, ultimo_par;
    ultimo_par = (NUM_PAR - 1)*2;
    for(i = 0; i <= ultimo_par; i += 2){
        soma += i;
        n++; 
    }
    printf("%d\n%d\n",soma,n);
    return 0;
}
 