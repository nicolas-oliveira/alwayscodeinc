#include <iostream>
using namespace std;
struct celula {
    string nome;
    celula *proxima;
};

celula *inserirInicio(celula* l, celula* n){
    celula *nova = new celula;
    nova->nome = n->nome;
    nova->proxima = l->proxima;
    return nova;
}

void imprimir(celula *lista){
    if(lista == NULL){
        cout << "Lista vazia";
    }else {
        while(lista != NULL){
            cout << lista->nome << endl;
            lista = lista->proxima;
        }
    }
    
}
int main() {
    celula *lista = NULL;
    celula *lista2 = NULL;

    celula *nova = new celula;
    nova->nome = "Cachorro";
    nova->proxima= NULL;
    lista = nova;

    nova = new celula;
    nova->nome = "Gato";
    nova->proxima = lista;
    lista = nova;

    nova = new celula;
    nova->nome = "Peixe";
    nova->proxima = lista;

    imprimir(lista);
    imprimir(lista2);

    return 0;
}