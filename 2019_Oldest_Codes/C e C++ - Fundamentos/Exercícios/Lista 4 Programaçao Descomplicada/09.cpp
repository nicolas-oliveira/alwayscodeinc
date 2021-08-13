#include<stdio.h>
#include<stdlib.h>

main()
{
      int vetor[5];
      int i,opcao;
      
      for(i=0;i<5;i++)
       {
         printf("Digite um valor para a posicao %dª do vetor: ");
         scanf("%d",vetor[i]);
         }
       printf("Menu de Opçoes:\n");
       printf("O-Finaliza o programa\n");
       printf("1-Mostra o Vetor ordem direta\n");
       printf("2-Mostra o vetor na ordem inversa\n");
       printf("Digite sua opçao: ");
       scanf("%d",opcao);
       do
        {
          case(opcao==1)
          {
            printf("Vetor na forma direta!\n")
            for(i=0;i<5;i++)
              printf("%d",vetor[i]);
            break
            }
          case(opcao==2)
          {
            printf("Vetor na forma inversa!\n")
            for(i=5;i<5;i--)
              printf("%d",vetor[i]);
            break
            }
          case(opcao!=1 || opcao!=2)
           { 
            printf("Entrada invalida,por favor digite novamente!\n");
            printf("Digite sua opçao: ");
            scanf("%d",opcao);
            break
            }
          }  
          while(opcao!=0);
       system("pause");
       return 0;
       }  
