#include<stdio.h>
#include<stdlib.h>

int crescente(int a,int b,int c)
{
   int aux,maior,menor;
    
    if(a<b && b<c)
  {
     printf("A ordem crescente dos numeros digitados e :%d %d %d\n",a,b,c);
     }
  else if(a<c && c<b)
  {
     printf("A ordem crescente dos numeros digitados e :%d %d %d\n",a,c,b);  
     }
  else if(b<a && a<c)
  {
      printf("A ordem crescente dos numeros digitados e :%d %d %d\n",b,a,c);
     }
  else if(b<c && c<a)
  {
     printf("A ordem crescente dos numeros digitados e :%d %d %d\n",b,c,a);  
     }
  else if (c<a && a<b)
  {
     printf("A ordem crescente dos numeros digitados e :%d %d %d\n",c,a,b);
     }
  else
  {
     printf("A ordem crescente dos numeros digitados e :%d %d %d\n",c,b,a);
     }          
} 
int main(void)
{
    int n1,n2,n3;
    
    printf("Digite o primeiro numero :");
    scanf("%d",&n1);
    printf("Digite o segundo numero :");
    scanf("%d",&n2);
    printf("Digite o terceiro numero :");
    scanf("%d",&n3);
    crescente(n1,n2,n3);
    system("pause");
    return 0;
}  
