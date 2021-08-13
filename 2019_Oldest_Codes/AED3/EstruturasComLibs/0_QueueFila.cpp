// Filas / Queue
// O primeiro a entra é o primeiro a sair, o ultimo a entrar é o ultimo a sair
// Métodos:
// empty
// size
// front
// back
// push
// pop
#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue <string> cartas;
    
    cartas.push("Rei de copas");
    cartas.push("Rei de espadas");
    cartas.push("Rei de ouros");
    cartas.push("Rei de paus");
    
    cout << "Tamanho da fila: " << cartas.size() << endl;
    cout << "Primeira carta.: " << cartas.front() << endl;
    cout << "Ultima carta...: " << cartas.back() << endl << endl;

    while(!cartas.empty()){
        cout << "Removendo Carta: " << cartas.front() << endl;
        cartas.pop();
    }

    return 0;
}