#include <stdio.h>
int somaRecursiva(int N){
    if(N==1) 
        return 1;
        
   return N += somaRecursiva(N-1);
}
int main(){
    // Calcular de formar recursiva a somatoria de 1 até N
    // 1+2+3+4+5+6
    int N,f;
    printf("Digite um numero inteiro: ");
    scanf("%d",&N);
    f = somaRecursiva(N);
    printf("%d",f);
    return 0;
}