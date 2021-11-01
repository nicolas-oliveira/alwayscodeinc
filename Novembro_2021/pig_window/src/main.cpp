#include "PIG.h"

int main( int argc, char* args[] ){

    //criando o jogo (aplica��o)

    CriarJanela("Meu Jogo", 0);

    //associando o teclado (basta uma �nica vez) com a vari�vel meuTeclado
    // meuTeclado = GetTeclado();

    //loop principal do jogo
    while(PIG_JogoRodando == 1){

        //pega um evento que tenha ocorrido desde a �ltima passada do loop
        // evento = GetEvento();

        //aqui o evento deve ser tratado e tudo deve ser atualizado

        //ser� feita a prepara��o do frame que ser� exibido na tela
        IniciarDesenho();

        //todas as chamadas de desenho devem ser feitas aqui na ordem desejada

        //o frame totalmente pronto ser� mostrado na tela
        EncerrarDesenho();
    }

    //o jogo ser� encerrado
    FinalizarJanela();

    return 0;
}
