/*
 Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a média dos valores.

*/
#include <stdio.h>
int main(){
    float a[5], n, media = 0;

    for(int i = 0; i < 5; i++){
    printf("[%d]Digite um valor: ", i);
    scanf("%f",&a[i]);
    }
    
    n = a[0];
    
    for(int i = 0; i < 5; i++){
        if(n < a[i])
        n = a[i];

        media += a[i];
    }
    media /= 5;
    for(int i = 0; i < 5; i++){
        printf("%.1f\n", a[i]);
    }
    printf("\n%.1f\n%.1f", n, media);
    return 0;
}