/*Faca um programa receba dois numeros e execute as seguintes funcoes: ˜
 * Verificar se o numero digitado e positivo ou negativo. Sendo que o valor de retorno ´
sera 1 se positivo, 0 se negativo ou -1 se for igual a 0. ´
Obedeca ao prototipo da funcao: int verifica(int num). ˜
 * Receber dois numeros inteiros positivos por parametro e retorne a soma dos N
numeros inteiros existentes entre eles. ´
int soma entre(int num1, int num2).*/


#include<stdio.h>
#include<stdlib.h>

   int verifica(int num)
   {
      if(num>0)
        return 1;
      if(num<0)
        return 0;
      if(num=0)
        return -1;
    }
    
    int soma_entre(int num1, int num2)
    {
      int i,soma=0;
      
        for(i=num1;i<=num2;i++)
        soma=(soma+i);
        return soma;
        }
   
main()
 {
      int numero1,numero2;
      
      printf("Digite o primeiro numero: ");
      scanf("%d",&numero1);
      printf("Digite o segundo numero: ");
      scanf("%d",&numero2);
      printf("%d\n",verifica(numero1));
      printf("%d\n",verifica(numero2));
      printf("Soma entre os numeros digitado:%d \n",soma_entre(numero1,numero2));
      system("pause");
      return 0;
      }
 
 
      
