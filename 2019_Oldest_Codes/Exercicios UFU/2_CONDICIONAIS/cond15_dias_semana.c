/*
 Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia
da semana correspondente a este numero. Isto é, domingo se 1, segunda-feira se 2, e
assim por diante.
*/
#include <stdio.h>
int main(){
    int a;
    printf("Digite um numero: ");
    scanf("%d", &a);
    switch(a){
        case 1:
        printf("Segunda");
            break;
        
        case 2:
        printf("Terça");
            break;
        
        case 3:
        printf("Quarta");
            break;
        
        case 4:
        printf("Quinta");
            break;
        
        case 5:
        printf("Sexta");
            break;
        
        case 6:
        printf("Sábado");
            break;
        
        case 7:
        printf("Domingo");
            break;
        
        default:
        printf("Sem dia correspondente");
            break;
    }
    return 0;
}