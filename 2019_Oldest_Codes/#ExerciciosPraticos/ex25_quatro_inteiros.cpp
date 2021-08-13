/*
Quatro inteiros entre 0 e 100 representam as pontuações de um estudante de um curso de informática
Escrever um programa para encontrar a média destas pontuações e visualizar uma tabela de notas
de acordo com o seguinte quadro:
---------------------
Média     | Pontuação
--------------------
[90-100]  |     A
[80-90]   |     B
[70-80]   |     C
[60-70]   |     D
[0-60]    |     E
--------------------
*/
#include <iostream>
using namespace std;
int main(){
    int vet[4];
    float m;
    cout << "Bem vindo à pontuação de informática!" << '\n';
    cout << "Será calculado a média e deverá entrar nessa tabela: " << "\n";
    std::cout << "---------------------" << '\n';
    std::cout << "Média     | Pontuação" << '\n';
    std::cout << "--------------------" << '\n';
    std::cout << "[90-100]  |     A" << '\n';
    std::cout << "[80-90]   |     B" << '\n';
    std::cout << "[70-80]   |     C" << '\n';
    std::cout << "[60-70]   |     D" << '\n';
    std::cout << "[0-60]    |     E" << '\n';
    std::cout << "--------------------" << '\n';

    
    for (int i = 0; i < 4; i++){
        do{

        cout << "Digite o valor de " << i + 1 <<" :";
        cin >> vet[i];
        system("clear");

        cout << m << "\n";

        }while (vet[i] < 0 || vet[i] > 100);
        
        m += vet[i];
        cout << m << "\n";
    }

        m /= 4;
        
        if(m > 90 && m < 100){
            cout << "A";
        }else if(m > 80 && m < 90){
            cout << "B";

        }else if(m > 70 && m < 80){
            cout << "C";

        }else if (m > 60 && m < 70){
            cout << "D";

        }else if(m >= 0 && m < 60){
            cout << "E";

        }
    return 0;

}