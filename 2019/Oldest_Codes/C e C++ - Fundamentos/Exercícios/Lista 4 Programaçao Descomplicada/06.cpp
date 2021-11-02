#include<stdio.h>
#include<stdlib.h>

main( )
 {
      int a[11];
      int i,x,maior,aux;
      
      for(i=0;i<11;i++)
       {
          printf("Entre com o vetor: ");
          scanf("%d",a[i]);
          }
      for(i=0;i<11;i++)
      {
       for(x=i+1;i<11;i++)
       {
         if(a[i]>x[i])
           {
             aux=a[i]
             a[i]=x[i]
             x[i]=aux
             }
           }
         }
       printf("Vetor ordenado:\n");
       for(i=0;i<11;i++)
        printf("%d",a[i]);
       system("pause");
       return 0;
       }
       
        
       
       
