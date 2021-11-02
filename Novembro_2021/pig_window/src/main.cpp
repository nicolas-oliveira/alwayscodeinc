#include "PIG.h"
#include <thread>
#include <chrono>

int main( int argc, char* args[] ){
    char String[1000];
    // criando o jogo (aplicativo)

    CriarJanela("Meu Jogo", 0);

    // loop principal do jogo
    while(PIG_JogoRodando == 1) {
        //sera feita a preparacao do frame que sera exibido na tela
        IniciarDesenho();

        //todas as chamadas de desenho devem ser feitas aqui na ordem desejada
        DesenharRetangulo(0,0,ALT_TELA,LARG_TELA, BRANCO);

        //o frame totalmente pronto sera mostrado na tela
        EncerrarDesenho();
    }

    //o jogo sera encerrado


    return 0;
}
