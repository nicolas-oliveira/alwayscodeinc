/*
 Calcule as raı́zes da equação de 2o grau.
Lembrando que:
    x = (−b ± √∆) / 2a
    Onde:
    ∆ = B^2 − 4ac
E ax^2 + bx + c = 0 representa uma equação de 2o grau.
A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não
é equação de segundo grau”.
    • Se ∆ < 0, não existe real. Imprima a mensagem Nao existe raiz.
    • Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz única.
    • Se ∆ ≥ 0, imprima as duas raizes reais.
*/
#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,delta,x,verif;

    printf("Digite o valor a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    
    if(b < 0 && c < 0){
        printf("\n%.1fX² %.1fX %.1f\n",a,b,c);
    }else if(b > 0 && c < 0){
        printf("\n%.1fX² + %.1fX %.1f\n",a,b,c);
    }else if(b < 0 && c > 0){
        printf("\n%.1fX² %.1fX + %.1f\n",a,b,c);
    }else if(b > 0 && c > 0){
        printf("\n%.1fX² + %.1fX + %.1f\n",a,b,c);
    }

    delta = pow(b,2) - (4*a*c);
    printf("∆ = %.1f\n",delta);
    

    if(delta < 0){
        printf("\nNão existe raiz");
    }else if(delta >= 0){
        x = ((b*(-1))+sqrt(delta)) / (2 * a);
        printf("\n%.4f",x);
        x = 0;
        x = (b*(-1)-sqrt(delta)) / (2 * a);
        printf("\n%.4f",x);
    }

    return 0;
}
