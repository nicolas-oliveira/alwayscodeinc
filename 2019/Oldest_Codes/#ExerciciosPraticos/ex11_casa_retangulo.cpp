//Calcular a area de varios retangulos e soma de suas areas no final

#include <iostream>
using namespace std;

int main(){
    int i;
    int a, b, c, at = 0; // Sem declarar a area total com 0 ele pega o lixo da memoria
     
        for(i = 0; i < 5; i++){ // o i++ eh a condicao de parada, sem ele a condicao segue infinitamente  
        cout << "Digite o comprimento: ";
        cin >> b;

        cout << "Digite a largura: ";
        cin >> c;

        a = (b * c);
        at = a + at;
        cout << a << '\n';
    }
    cout<< at << '\n';
return 0;
}