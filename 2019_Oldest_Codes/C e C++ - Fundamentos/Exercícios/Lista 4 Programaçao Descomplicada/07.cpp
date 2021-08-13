#include<stdio.h>
#include<stdlib.h>
#define tam 5
main()
{
      int a[tam],
          b[tam],
          c[tam],
          i;
      
      for(i=0;i<tam;i++)
       {
         printf("Entre com o valor da posicao %d do vetor A:",i);
         scanf("%d",&a[i]);
         }
      for(i=0;i<tam;i++)
       {
         printf("Entre com o valor da posicao %d do vetor B:",i);
         scanf("%d",&b[i]);
         }
      for(i=0;i<tam;i++)
       {
         c[i]=(a[i]-b[i]);
         }
      printf("Apos a manipulaçao o vetor C sera: \n");
      for(i=0;i<tam;i++)
       {
         printf("%d  ",c[i]);
         }
       printf("\n");
       system("pause");
       return 0;
       }
