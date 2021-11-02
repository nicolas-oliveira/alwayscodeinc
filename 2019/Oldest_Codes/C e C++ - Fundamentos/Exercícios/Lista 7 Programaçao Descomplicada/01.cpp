#include<stdio.h>
#include<stdlib.h>

int dobro (int x)
   {
     return x=(x*2);  
     }

main( )
 {
      int numero1,numero2,numero3;
      
      printf("Digite o primeiro numero: ");
      scanf("%d",&numero1);
      printf("Digite o segundo numero: ");
      scanf("%d",&numero2);
      printf("Digite o terceiro numero: ");
      scanf("%d",&numero3);
      printf("O dobro do primeiro numero:%d\n ",dobro(numero1));
      printf("O dobro do segundo numero:%d\n ",dobro(numero2));
      printf("O dobro do terceiro numero:%d\n ",dobro(numero3));
      system("pause");
      return 0;
}     
