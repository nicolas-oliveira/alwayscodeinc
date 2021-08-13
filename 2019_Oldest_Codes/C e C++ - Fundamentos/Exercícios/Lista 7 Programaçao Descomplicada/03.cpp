/*Faca uma funcao que receba por parametro dois valores X e Z. Calcule e retorne o ˆ
resultado de XZ para o programa principal. Atencao nao utilize nenhuma funcao pronta ˜
de exponenciacao.*/

#include<stdio.h>
#include<stdlib.h>

int conta(int x,int z)
   {
     int i,result=1;
       for(i=1;i<z;i++)
         result=(result*z);
     return result;
     }
main( )
{
    int val1,val2;
    
    printf("Digite o primeiro valor:");
    scanf("%d",&val1);
    printf("Digite o segundo valor:");
    scanf("%d",&val2);
    printf("O resultado da exponenciaçao dos valores digitado e :%d\n ",conta(val1,val2));
    system("pause");
    return 0;
}
