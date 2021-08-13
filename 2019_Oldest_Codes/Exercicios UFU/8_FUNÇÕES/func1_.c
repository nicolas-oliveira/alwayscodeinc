 /*
 Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro.
 */
#include <stdio.h>
int dobro(int x){
    return x*x;
}
int main(){
    int x;
    scanf("%d", &x);
    printf("%d", dobro(x)); 
    return 0;
}