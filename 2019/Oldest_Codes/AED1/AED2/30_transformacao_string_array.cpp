#include <iostream>

using namespace std;

int main(){
    string texto;
    getline(cin,texto);
    int tam = texto.length();
    char letras[tam];
    for(int i = 0; i < tam; i++) letras[i] = texto[i];
    for(int i = 0; i < tam; i++) cout << letras[i];
    return 0;
}