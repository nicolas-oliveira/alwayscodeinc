#include <iostream>
using namespace std;

struct Carro{
    string nome;
    string cor;
    int potencia;
    int velocidadeMax;
};

int main(){
    Carro car1, car2;

    car1.nome = "Tornado";
    car1.cor = "Vermelho";
    car1.potencia = 350;
    car1.velocidadeMax = 260;

    car2.nome = "Relampago Marquinhos";
    car2.cor = "Preto";
    car2.potencia = 450;
    car2.velocidadeMax = 350;


    cout <<"Nome.............: " << car1.nome << endl;
    cout <<"Cor..............: " << car1.cor << endl;
    cout <<"Potência.........: " << car1.potencia << endl;
    cout <<"Velocidade Máxima: " << car1.velocidadeMax << "\n\n";

    cout <<"Nome.............: " << car2.nome << endl;
    cout <<"Cor..............: " << car2.cor << endl;
    cout <<"Potência.........: " << car2.potencia << endl;
    cout <<"Velocidade Máxima: " << car2.velocidadeMax << "\n\n";
    return 0;
}