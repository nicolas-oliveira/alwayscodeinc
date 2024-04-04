/*
 Leia um numero real. Se o número for positivo imprima a raiz quadrada. Do contrário,
imprima o numero ao quadrado.
*/
#include <stdio.h>
#include <math.h>
int main(){
    float a;
    printf("Digite um numero: ");
    scanf("%f",&a);
    if(a>=0){
        printf("%f",sqrt(a));
    }else{
        printf("%f", (a * a));
    }
    return 0;
}