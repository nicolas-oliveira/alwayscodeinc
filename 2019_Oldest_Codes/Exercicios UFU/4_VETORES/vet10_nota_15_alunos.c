/*
 Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
e imprima a média geral.
*/
#include <stdio.h>
int main(){
    float nota[15], soma = 0.0, media;
    for(int i = 0; i < 15; i++){
        printf("Digite o valor da nota do aluno %d: ", i+1);
        scanf("%f",&nota[i]);
    }
    for(int i = 0; i < 15; i++){
        soma += nota[i];
    }
    media = soma/15;
    printf("O valor da média geral é de: %.2f", media);
    return 0;
}
