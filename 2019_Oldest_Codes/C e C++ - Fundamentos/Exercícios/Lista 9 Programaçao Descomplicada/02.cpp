/*Faca um programa que leia dois valores inteiros e chame uma sub-rotina que receba
estes 2 valores de entrada e retorne o maior valor na primeira variavel e o segundo ´
maior valor na segunda variavel. Escreva o conteudo das 2 variaveis na tela.*/

#include<stdio.h>
#include<stdlib.h>

int maior(int a ,int b)
 {
  int maior;
  
  if(a>b)
   {
     maior=a;
     printf("O maior valor é :%d\n",maior);
     printf("O segundo maior valor(menor) e:%d\n",b);
     }
     else
     {
     printf("O maior valor é :%d\n",b);
     printf("O segundo maior valor(menor) e:%d\n",a);
     }
     return 0;
  }

int main(void)
{
    int a,b;
    
    printf("Digite um valor para A: ");
    scanf("%d",&a);
    printf("Digite um valor para B: ");
    scanf("%d",&b);
    maior(a,b);
    system("pause");
    return 0;
}
