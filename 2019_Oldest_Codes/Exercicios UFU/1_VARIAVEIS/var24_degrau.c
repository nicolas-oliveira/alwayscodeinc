/*
  Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar
  subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir
  seu objetivo.
    Segundo a equação de Blondel o numero de escadas (espelhos) e igual a:
    Num.E = H / E 
*/
#include <stdio.h>
int round(double number); //Arredonda os numeros

int main()
{
    float n,altura_degrau, altura_escada;
    
    printf("Digite a altura do degrau em cm: ");
    scanf("%f", &altura_degrau);
    
    printf("Digite a altura da escada em cm: ");
    scanf("%f", &altura_escada);
    
    n = altura_escada / altura_degrau;
    
    printf("%d", int(n+0.5));
    
    return 0;
}

int round(double number) //Arredonda os numeros
{
    return (number >= 0) ? (int)(number + 0.5) : (int)(number - 0.5);
    /*
    if(number >= 0){
        (int)(number + 0.5);
    }else{ 
        (int)(number - 0.5);
    }
    */
}