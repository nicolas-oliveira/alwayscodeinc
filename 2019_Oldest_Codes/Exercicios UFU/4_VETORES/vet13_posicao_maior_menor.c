/*
 Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se 
encontram o maior e o menor valor.

*/
#include <stdio.h>
int main(){
    float a[5], scale_big, scale_small;
    int set_big, set_small;
    for(int i = 0; i < 5; i++){
        printf("[%d] - Escreva um numero: ", i);
        scanf("%f", &a[i]);
    }

    scale_small = a[0];
    scale_big = a[0];
    
    for(int i = 0; i < 5; i++){
       
        if(scale_big < a[i]){
            set_big = i;
            scale_big = a[i];
        }

        if(scale_small > a[i]){
            set_small = i;
            scale_small = a[i];
        }

    }

    printf("Posição do maior: %d\nPosição do menor: %d\n", set_big, set_small);
    return 0;
}