#include <iostream>

using namespace  std;

struct celula {
    string nome;
    celula *proxima;
};

int main(){
    celula *lista = NULL;

    celula *nova = new celula;
    nova->nome = "Cachorro";
    nova->proxima = NULL;
    lista = nova;

    nova = new celula;
    nova->nome = "Gato";
    nova->proxima = lista;
    lista = nova;

    nova = new celula;
    nova->nome = "Peixe";
    nova->proxima = lista;

    return 0;
}