#include <stdio.h>
int sumCube(int n){
    int m = n;
    m *= (m*m);
    if(n==1)
        return 1;
    else return m + sumCube(n-1);
}
int main(){
    //Função recursiva que calcule a soma dos primeiros n cubos: 
    // n = 4
    // S(n) = (1*1*1)+(2*2*2)+(3*3*3)+(4*4*4)
    int N, res;
    printf("Escolha um número: ");
    scanf("%d",&N);
    res = sumCube(N);
    printf("%d",res);
    return 0;
}