#include <stdio.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <string.h>

int main() {
    struct winsize w;
    int counter = 0;  // Variável que será usada para gerar o texto dinâmico

    while (1) {
        // Obtém o tamanho da janela do terminal
        ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

        // Limpa a tela
        printf("\x1b[2J\x1b[H");

        // Gera um texto dinâmico (exemplo: contador)
        char text[50];
				sprintf(text, "Linhas: %d, Colunas: %d\n", w.ws_row, w.ws_col);

        // Calcula o comprimento do texto gerado
        int text_len = strlen(text);

        // Calcula a posição vertical e horizontal para centralizar o texto
        int row_pos = w.ws_row / 2;                  // Posição vertical (linha)
        int col_pos = (w.ws_col - text_len) / 2;     // Posição horizontal (coluna)

        // Mover o cursor para a posição calculada
        printf("\x1b[%d;%dH", row_pos, col_pos);

        // Imprime o texto centralizado
        printf("%s\n", text);

        // Força o flush do buffer
        fflush(stdout);

        // Aguarda 1 segundo antes da próxima iteração
        sleep(1);

        // Incrementa o contador para mudar o texto na próxima iteração
        counter++;
    }

    return 0;
}
