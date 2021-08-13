/*
 Escreva um programa que leia as coordenadas x e y de pontos no R^2 (Circulo) e 
calcule sua distância da origem (0, 0).
 Distancia entre dois pontos
  A(x,y) .----------.B (x1,y1)
  D[AB] = [(x-x1)^2 - (y-y1)^2]^(1/2)
*/
#include <stdio.h>
#include <math.h>
float modulo(int num){ // Funcao que transforma numeros negativos em positivos
    return (num < 0) ? ((~num) + 1) : (num);
}
int main(){
    int x, y;
    float distancia_r2;
    printf("Digite a posição da coordenada x: ");
    scanf("%d", &x);
    modulo(x);
    
    printf("Digite a posição da coordenada y: ");
    scanf("%d", &y);
    modulo(y);
    
    distancia_r2 = sqrt( modulo(pow(x, 2) - pow(y, 2)) ); //D[AB] = [(x-x1)^2 - (y-y1)^2]^(1/2)
    printf("%f", distancia_r2);
    
    return 0;
}