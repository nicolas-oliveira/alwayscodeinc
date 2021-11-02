/*
    Faça um programa que leia um vetor de 10 posições e verifique se existem 
valores iguais e os escreva na tela.
*/
#include <stdio.h>
int main(){
    int n = 5;
    float a[n], compare, b[2];
    for(int i = 0; i < n; i++){
        printf("[%d] - Escreva: ", i);
        scanf("%f", &a[i]);
    }
    
    compare = a[0];
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++)
            if(compare == a[j]){
                b[i] = a[j];
            }else{
                compare = a[j];
            }
    }
    
    for(int i = 0; i < 2; i++){
        printf("%.0f\n", b[i]);
    }
    
    return 0;
}