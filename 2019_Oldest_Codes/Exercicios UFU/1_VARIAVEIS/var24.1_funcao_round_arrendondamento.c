/*
/*
Demonstro aqui a funcao round() criada para arrendondar numeros simples
*/
#include <stdio.h>
int round(float number);
int main(){

    float res[] = {-12.0, -13.0, -14.0, -15.0, -16.0, -17.0, -18.0};
     //Sem o '.0' ele trunca, ou seja, corta o resultado apos a virgula
    for(int i = 0; i < 7; i++)
    {
        res[i] /= 10.0; 
        printf("%f\n", res[i]);
        //truncagem:
        printf("%d | Truncado\n", (int)res[i]); 
        //Sem '(int)' ele pega lixo de memoria
        
        printf("%d | +0,5\n", (int)(res[i] + 0.5));
        printf("%d | -0,5\n", (int)(res[i] - 0.5));
        
        //Arredondondamento a partir da funcao round:
        printf("%d | Arredondado\n\n", round(res[i]));
    }
    
    return 0;
}

int round(float number)
{
    return (number >= 0) ? (int)(number + 0.5) : (int)(number - 0.5);
}
