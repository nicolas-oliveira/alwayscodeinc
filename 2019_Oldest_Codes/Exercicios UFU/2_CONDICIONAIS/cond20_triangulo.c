/*
. Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triângulo
e, se forem, se é um triângulo escaleno, equilátero ou isóscele, considerando os seguin-
tes conceitos:
    • O comprimento de cada lado de um triângulo é menor do que a soma dos outros
dois lados.
    • Chama-se equilátero o triângulo que tem três lados iguais.
    • Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais.
    • Recebe o nome de escaleno o triângulo que tem os três lados diferentes.
*/
#include <stdio.h>
int main(){
    int a,b,c;
    
    printf("Digite o lado do triangulo: ");
    scanf("%d", &a);
    
    printf("Digite o lado do triangulo: ");
    scanf("%d", &b);
    
    printf("Digite o lado do triangulo: ");
    scanf("%d", &c);
    
    if(a < (b+c) && b < (a+c) && c < (a+b)){
        if(a == b && b == c){
            printf("É um triangulo equilátero");
        
        }else if(a == b || b == c){
            printf("É um triangulo isóceles");
        
        }else{
            printf("É um triangulo escaleno");
        }
    }else{
        printf("Não é um triângulo");
    }
    return 0;
}