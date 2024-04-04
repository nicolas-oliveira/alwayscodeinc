#include <iostream>
using namespace std;
struct Carro{
    string nome;
    string cor;
    int potencia;
    int velocidadeMAX;
    int velocidade;

    void input(string st_nome, string st_cor, int st_pot, int st_velocidadeMAX){
        nome = st_nome;
        cor = st_cor;
        potencia = st_pot;
        velocidadeMAX = st_velocidadeMAX;
    }

    void output(){
        cout <<"Nome.............: " << nome << endl;
        cout <<"Cor..............: " << cor << endl;
        cout <<"Potência.........: " << potencia << endl;
        cout <<"Velocidade Máxima: " << velocidadeMAX << "\n\n";
    }

    void muda_velocidade(int mv){
        velocidade = mv;
        if(velocidade > velocidadeMAX){
            velocidade = velocidadeMAX;
        }

        if(velocidade > 0){
            velocidade = 0;
        }
    }
};
int main(){
    Carro car1, car2, car3, car4;

    car1.input("Tornado","Vermelho",350,260);
    car2.input("Relampago Marquinhos","Preto",450,350);

    car1.output();
    car2.output();
    return 0;
}