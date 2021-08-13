#include <iostream>
using namespace std;

struct celula{
    string nome;
    celula *proxima;
};

int main(){
    celula *lista = NULL; // Reserva o endereço na memória inicializando a lista
    celula *nova = new celula;
    
    nova->nome = "Nicolas";
    nova->proxima = NULL;
    lista = nova;

    nova = new celula;
    nova->nome = "Oliveira";
    nova->proxima = nova;
    
    return 0;
}