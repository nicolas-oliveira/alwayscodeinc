#include <iostream>
using namespace std;
// * = guarda o endereço da variável
// & = Guarda o valor correspondente ao endereço da variável
int main(){
    string veiculo = "Carro";
    string *pont_veiculo;
    
    pont_veiculo = &veiculo; // Adicionado o valor da variável veículo
    cout << pont_veiculo << endl << &veiculo;

    *pont_veiculo = "Moto"; // No endereço apontado por pont_veiculo adicione o valor moto
    cout << endl << veiculo << endl << *pont_veiculo; 

    return 0;
}