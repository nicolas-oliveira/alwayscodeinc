 /*
 Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor
de retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.
 */
#include <stdio.h>
int verif(int x){
    if(x < 0)
    return -1;
    
    if(x > 0)
    return 1;
    
    if(x == 0)
    return 0;
}
int main() {
    int x;
    scanf("%d", &x);
    printf("%d", verif(x));
    return 0;
}