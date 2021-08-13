#include <iostream>
using namespace std;
struct Sala {
    int num_sala;
    float largura;
    float comprimento;
    int cadeiras;
    int lamp;
    string nome_turma;
};
int main(){
    struct Sala var;
    cout << "Digite o  numero da sala: ";
    cin >> var.num_sala;
    cout << "Digite o comprimento: ";
    cin >> var.comprimento;
    cout << "Digite a quant de cadeiras: ";
    cin >> var.cadeiras;
    cout << "Digite a quantidade de lampadas: ";
    cin >> var.lamp;
    cout << "Digite o nome da turma: ";
    cin >> var.nome_turma;

    return 0;
}