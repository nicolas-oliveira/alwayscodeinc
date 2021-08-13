#include <iostream>
#include <stack> // Biblioteca para trabalhar com pilhas
// O ultimo elemento a entrar é o primeiro a sair, 
// o primeiro a entrar é o ultimo a sair da pilha
using namespace std;

int main(){
    stack <string> cartas; //A pilha é dinâmica não exigindo especificar o tamanho da mem
    if(cartas.empty()){
        cout << "Pilha vazia" << endl << endl;
    }else{
        cout << "Pilha com cartas" << endl;
    }
    // if( cartas.size() == 0 ){
    //     cout << "Pilha vazia" << endl << endl;
    // }else{
    //     cout << "Pilha com cartas" << endl;
    // }
    
    cartas.push("Rei de copas");
    cartas.push("Rei de espadas");
    cartas.push("Rei de ouros");
    cartas.push("Rei de paus");

    cout << "Tamanho da pilha: " << cartas.size() << endl;
    cout << "Nova carta do topo: " << cartas.top() << endl << endl;
    cartas.pop(); // Retira um elemento da pilha (Retira do topo)
    cout << "Tamanho da pilha: " << cartas.size() << endl;
    cout << "Nova carta do topo: " << cartas.top() << endl << endl;

    while (!cartas.empty()) {
        cartas.pop();
        cout << "Removendo" << endl;
    }
    cout << endl;

    cout << "Tamanho da pilha: " << cartas.size() << endl;

    return 0;
}