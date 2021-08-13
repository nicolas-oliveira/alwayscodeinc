// Métodos das listas
#include <iostream>
#include <list>

using namespace std;

int main(){
    list <int> aula;
    int tam = 10;
    list <int>::iterator it; // Torna possivel adicionar em qualquer posição da lista

    for(int i = 0; i < tam; i++){
        aula.push_front(i); //push_back() inverte a lista
    }

    it = aula.begin();
    advance(it,5);//parametros iterator e a distância
    aula.insert(it,999);// Insere o numero 999 na configuração de advance
    
    cout << "Tamanho da lista: " << aula.size() << endl << endl;
    //aula.sort(); // ordena os numeros da lista
    tam = aula.size();
    for(int i = 0; i < tam; i++){
        cout << aula.front() << endl;
        aula.pop_front();
    }
    return 0;
}