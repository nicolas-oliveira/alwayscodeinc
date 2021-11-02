// Um progrma que faça a soma de 3 valores que o usuario coloca
#include <stdio.h>
int main(){
    int a = 0, b = 0;
    for(int i = 0; i < 3; i++){
        printf("Digite um número: ");
        scanf("%d", &b);
        a += b;
    }
    printf("\e[H[\e[2J");
    printf("A soma dos 3 é: %d", a);
return 0;
}