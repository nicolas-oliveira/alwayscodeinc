/*
 Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
• Homens: (72.7 ∗ h) − 58
• Mulheres: (62, 1 ∗ h) − 44, 7
*/
#include <stdio.h>
int main(){
    float peso_ideal, altura;
    char sexo;
    do{
        
        printf("\e[H\e[2J");
        printf("Digite o sexo (h ou m): ");
        scanf("%c",&sexo);
        
    }while(sexo != 'h' && sexo != 'm');
    
    printf("Digite a altura em metros: ");
    scanf("%f",&altura);
    
    if(sexo == 'h')
        peso_ideal = (72.7 * altura) - 58;
    if(sexo == 'm')
        peso_ideal = (62.1 * altura) - 44.7;
    
    printf("Este é o peso ideal: %.2fKg", peso_ideal);
    
    return 0;
}