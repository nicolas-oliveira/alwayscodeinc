/*Faca um programa que leia 2 valores inteiros e chame uma sub-rotina que receba estas
2 variaveis e troque o seu conteudo, ou seja, esta rotina e chamada passando duas ´
variaveis A e B por exemplo, e apos a execucao da rotina A contera o valor de B e B tera
o valor de A.*/

#include<stdio.h>
#include<stdlib.h>

int troca (int a ,int b)
 {
   int aux=0;
   
   aux=a;
   a=b;
   b=aux;
   printf("O conteudo de A e B trocados sao :%d %d\n",a,b);
   return 0;
 }
 
 int main(void)
 {
     int num1,num2;
     
     printf("Digite um valor para A: ");
     scanf("%d",&num1);
     printf("Digite um valor para B: ");
     scanf("%d",&num2);
     troca(num1,num2);
     system("pause");
     return 0;
     }
