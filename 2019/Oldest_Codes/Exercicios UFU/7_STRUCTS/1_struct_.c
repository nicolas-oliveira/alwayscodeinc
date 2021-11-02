/*
1. Escreva um trecho de código para fazer a criação dos novos tipos de dados 
conforme solicitado abaixo:
  • Horário: composto de hora, minutos e segundos.
  • Data: composto de dia, mês e ano.
  • Compromisso: composto de uma data, horário e texto que descreve o compromisso.
*/ 
#include <stdio.h>
int main(){
    struct t_pessoa{
        char nome[40];
        int idade;
    };

    struct t_pessoa pessoa;

    printf("Digite o nome: ");
    scanf("%[^\n]s", &pessoa.nome);
    printf("Fala %s ");
    return 0;
}
