#include <stdio.h>
#include <sys/ioctl.h>
#include <unistd.h>

int main() {
    struct winsize w;

    // Obtém o tamanho da janela do terminal
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

    // Exibe o número de linhas e colunas
		printf("\x1b[2J\x1b[H");
    printf("Linhas: %d\n", w.ws_row);
    printf("Colunas: %d\n", w.ws_col);

    // Calcula o número total de caracteres
    int total_chars = w.ws_row * w.ws_col;
    printf("Total de caracteres no terminal: %d\n", total_chars);

    return 0;
}