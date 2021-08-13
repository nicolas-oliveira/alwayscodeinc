#include<stdio.h>
#include<stdlib.h>
#define tam 5
main()
{
      int a[tam],
          i,x;
      
      for(i=0;i<tam;i++)
       {
         printf("Entre com o valor da posicao %d do vetor A:",i);
         scanf("%d",&a[i]);
         }
      for(i=0;i<tam;i++)
        for(i=i+1;i<tam;i++)
         {
          if(a[i]==a[x]);
         printf("Foi achado numeros iguais e o numero e %d.\n",a[i]);
         }
       printf("\n");
       system("pause");
       return 0;
       }
