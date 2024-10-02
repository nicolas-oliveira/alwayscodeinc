// 2.  Elabore um programa que, após limpar a tela, 
//     peça o nome de uma pessoa e depois printe na tela: 
//                      'É um prazer te conhecer, (nome da pessoa).'


#include <iostream>
#include <locale>
#include <string>
#include <std.lib> //windows
using namespace std;
int main() {
    string name1;
    setlocale(LC_ALL, "portuguese");
    cout << "Qual é o seu nome? "; 
    
    cin >> name1;

    cout << "Prazer te conhecer, " << name1 << endl;
    system("pause");
    
    return 0;   
}