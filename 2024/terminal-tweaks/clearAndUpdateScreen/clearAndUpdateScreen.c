#include <stdio.h>
#include <sys/ioctl.h>
#include <unistd.h>

int main() {
  struct winsize w;
  int counter = 0;

  while (1) {
    // Obtém o tamanho da janela do terminal
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

    // Limpa a tela e move o cursor para o topo (0,0)
    printf("\x1b[2J\x1b[H");

    // Exibe o número de linhas e colunas (dimensões do terminal)
    printf("Linhas: %d, Colunas: %d\n", w.ws_row, w.ws_col);

    // Exibe uma mensagem de contagem que está sendo atualizada
    printf("Contagem: %d\n", counter);

    // Incrementa o contador
    counter++;

    // Força o flush do buffer para garantir que as mensagens apareçam
    // imediatamente
    fflush(stdout);

    // Aguarda 1 segundo antes da próxima iteração (simulando uma atualização de
    // tela)
    sleep(1);
  }

  return 0;
}
