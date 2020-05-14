#include <stdio.h>
int fatorial(int n){
    if(n==0){
        return 1;
    }else if(n < 0){
        printf("Numero incorreto");

    }
    return n*fatorial(n-1);
}
int main(){
    // Fatorial com recursividade
    // 3! = 3x2x1
    // 4! = 4x3x2x1
    // n! = nx(n-1)x(n-2)..
    int N,f;
    printf("Escolha um número: ");
    scanf("%d",&N);
    f = fatorial(N);
    printf("%d",f);
    return 0;
}