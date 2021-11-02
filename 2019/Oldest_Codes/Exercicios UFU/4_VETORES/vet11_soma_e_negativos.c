/*
 Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a
quantidade de números negativos e a soma dos números positivos desse vetor.
*/
#include <stdio.h>
#define VAR 4
int main(){
    int numn = 0;
    float a[VAR],soma = 0;
    
    for(int i = 0; i < VAR; i++){
        printf("Digite um numero: ");
        scanf("%f", &a[i]);
    }
    
    for(int i = 0; i < VAR; i++){
        if(a[i] < 0)
        numn++;
        if(a[i] >= 0)
        soma += a[i];
    }
    
    printf("Qt de numeros negativos: %d\n", numn);
    printf("Soma numeros positivos: %.2f\n", soma);
    
    return 0;
}
