/*
 Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva
na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a
contagem.
*/

#include <stdio.h>
#include <unistd.h>
int main(){
    int i = 10;
    while(i >= 0){
        printf("%d\n", i);
        i--;
        sleep(1);
        printf("\e[H\e[2J");
        
    }
    return 0;
}