#include<stdio.h>
#include<stdlib.h>

main ()
 {
     int numero[5];
     int i;
     
     for(i=0;i<5;i++)
      {
        printf("Entre com uma valor para o vetor:");
        scanf("%d",numero[5]);
        }
      printf("Mostrando apenas os numeros primos e suas posiçoes ");
      for(i=0;i<5;i++)
       if(numero[i] % numero[i]==0 && numero[i] % 1==0)
        {
         printf("Numero:%d\n",numero[i]);
         printf("Posicao:%d\n",i);
         }
      system("pause");
      return 0;
     }
