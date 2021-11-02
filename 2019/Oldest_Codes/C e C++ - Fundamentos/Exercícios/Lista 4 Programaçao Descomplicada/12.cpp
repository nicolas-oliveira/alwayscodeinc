#include<stdio.h>
#include<stdlib.h>

int main(void)
{
      int v[5],
          v1[5],
          v2[5];
      int i;
      
      for(i=0;i<10;i++)
       {
         printf("Entre com o valor para o vetor A: ");
         scanf("%d",v[i]);
         }
       for(i=0;i<10;i++)
        {
          if(v[i]%2==0)
           v1[i]=v[i];
           else
            v2[i]=v[i];
           }
       printf("Vetor par!");
       for(i=0;i<10;i++)
        {
          if(v1[i]!=0)
            printf("%d",v1[i]);
          }
       printf("Vetor impar!");
       for(i=0;i<10;i++)
        {
          if(v2[i]!=0)
            printf("%d",v2[i]);
          } 
       system("pause");
       return 0;
       }
