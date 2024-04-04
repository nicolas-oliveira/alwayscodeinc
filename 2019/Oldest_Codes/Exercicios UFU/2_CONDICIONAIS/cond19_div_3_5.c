/*
Faça um programa para verificar se um determinado número inteiro e divisı́vel por 3 ou
5, mas não simultaneamente pelos dois.
*/
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a % 3 == 0 && a % 5 != 0){
        printf("É divisivel por 3");
    }else if(a % 5 == 0 && a % 3 != 0){
        printf("É divisivel por 5");
    }
    return 0;
}