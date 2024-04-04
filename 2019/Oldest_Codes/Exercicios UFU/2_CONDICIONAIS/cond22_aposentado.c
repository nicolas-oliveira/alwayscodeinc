/*
 Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
aposentar. As condições para aposentadoria são
    • Ter pelo menos 65 anos,
    • Ou ter trabalhado pelo menos 30 anos,
    • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
*/
#include <stdio.h>
int main(){
    int idade, tempo;
    printf("Digite a idade do sujeito idoso: ");
    scanf("%d", &idade);
    printf("Digite a quantidade de tempo de serviço: ");
    scanf("%d", &tempo);
    if(idade >= 65){
        printf("Tranquilo.. Seu dinheiro roubado será devolvido..");
    }else if(idade >= 60 && tempo >= 25){
        printf("Tranquilo.. Seu dinheiro roubado será devolvido..");
    }else if(tempo >= 30){
        printf("Tranquilo.. Seu dinheiro roubado será devolvido..");
    }else{
        printf("Que peninha, parece que seu dinheiro roubado não será devolvido.. :(");
    }
    return 0;
}