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
    struct Sala var[50];
    int cad = 0;
    for(int i =0; i< 3; i++){
        cout << "Digite o  numero da sala: ";
        cin >> var[i].num_sala;
        cout << "Digite o comprimento: ";
        cin >> var[i].comprimento;
        cout << "Digite a quant de cadeiras: ";
        cin >> var[i].cadeiras;
        cout << "Digite a quantidade de lampadas: ";
        cin >> var[i].lamp;
        cout << "Digite o nome da turma: ";
        cin >> var[i].nome_turma;
    }
    
    for(int i =0; i<3; i++){
        if(var[i].cadeiras > 40){
            cad++;
        }
    }
    
    int num_sala_cad[cad];
    int i = 0;
    for(int i =0, j=0; i<cad, j<3; j++){
        if(var[j].cadeiras > 40){
            num_sala_cad[i] = var[j].num_sala;
            i++;
        }
    }
    cout << "O numero das salas que contem mais de 40 carteiras e: " << endl;
    for(int i =0; i<cad; i++){
     cout <<   num_sala_cad[i] << endl;
    }
}