//Fazer um programa que leia um mes (1 a 12) e indique seu numero de dias 30 ou 31 ou 28
#include <stdio.h>
int main(){
    int a;
    printf("Digite o numero do mes: ");
    scanf("%d", &a);
    if(a <= 12){
      
      if(a <= 7 && a != 2){
          if((a % 2) == 0){
              printf("31");
              }else{
                  printf("30");
                  }
        }      
        if( a >= 3 && a <= 7){
          if((a % 2) == 0){
              printf("30");
              }else{
                  printf("31");
                  }
        }
    }else{
        printf("Não existe um mes com o seguinte numero: %d", a);
    }

    return 0;
}