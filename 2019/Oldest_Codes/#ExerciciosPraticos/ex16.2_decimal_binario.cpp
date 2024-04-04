//Fazer um conversor de decimal pra binario

#include <iostream>
using namespace std;
int main() {
 
 int n; // Número de entrada
 int r; // Resultado do deslocamento
 int i; // Contador
  
 // Lê o número
 printf("Digite o numero: ");
 scanf("%d", &n);
  
 // Utiliza um número de 32 bits como base para a conversão.
 for(i = 31; i >= 0; i--) {
    // Executa a operação shift right até a 
    // última posição da direita para cada bit.
    r = n >> i; //Manipulacao bit a bit na variavel (c)
         
    // Por meio do "e" lógico ele compara se o valor 
    // na posição mais à direita é 1 ou 0 
    // e imprime na tela até reproduzir o número binário.
    if(r & 1) {
        printf("1");
    } else {
        printf("0");
    }
 }
  
 printf("\n");
  
 system("clear");
}