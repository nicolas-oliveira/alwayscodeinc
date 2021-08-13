// Fazer um programa que o usuario escolha a conversao da entrada e de saida em C, F OU K 
#include <iostream>
#include <cctype>
using namespace std;
int main(){
    char esc1, esc2; //Duas escolhas do usr, a formula a ser convertidade(esc1) e a formula de saida(esc2)
    float c, f, k; //As tres formulas possiveis, totalizando 9 possibilidades
    
    do {
        cout << "Digite qual temperatura a ser convertida--Celsius,Fahrenheit ou Kelvin(C,F,K): ";
        cin.get(esc1);    //Recebe o caracter
        esc1 = toupper(esc1); // Torna o caracter maiusculo
        system("clear"); // Limpa a tela
        if(esc1 != '\n'){ //Ignora quando a linha pula varias vezes evitando um bug de recursao do cout
            cin.ignore();
        }
        if(esc1 == 'C'){ //Primeira ramificacao da escolha (esc1)
            cout << "Digite a temperatura em Celsius: ";
            cin >> c;
            
            do { // Estrutura para a segunda escolha (esc2)
                cout << "Escolha a formula de conversao (F,K): ";
                cin.get(esc2);
                esc2 = toupper(esc2);
                system("clear");
                if(esc2 != '\n'){
                    cin.ignore();
                }
                if(esc2 == 'F'){
                    f = (c * (9.0 / 5.0) + 32.0);
                    cout << "A temperatura em Fahrenheit eh: " << f;
                }
                if(esc2 == 'K'){
                    k = (c + 273.75);
                    cout << "A temperatura em kelvin eh: " << k;
                }

            } while(esc2 != 'F' && esc2 != 'K');
        }


        if(esc1 == 'F'){
            cout << "Digite a temperatura em Fahrenheit: ";
            cin >> f;
            system("clear");
            do {
                cout << "Escolha a formula de saida (C,K): ";
                cin.get(esc2);
                esc2 = toupper(esc2);
                system("clear");
                if(esc2 != '\n'){
                    cin.ignore();
                }
                if(esc2 == 'C'){
                    c = (5.0*(f - 32.0)/ 9.0);
                    cout << "A temperatura em Celsius eh: " << c;
                }
                if(esc2 == 'K'){
                    k = (((f - 32.0)/9.0)*5 + 273.0);
                    cout << "A temperatura em kelvin eh: " << k;
                }

            } while(esc2 != 'C' && esc2 != 'K');
        }


        if(esc1 == 'K'){
            cout << "Digite a temperatura em Kelvin: ";
            cin >> c;
            system("clear");
            do {
                cout << "Escolha a formula de saida(C,F): ";
                cin.get(esc2);
                esc2 = toupper(esc2);
                system("clear");
                if(esc2 != '\n'){
                    cin.ignore();
                }
                if(esc2 == 'F'){
                    f = (((k - 273.0)/5.0)*9 + 32.0);
                    cout << "A temperatura em Fahrenheit eh: " << f;
                }
                if(esc2 == 'C'){
                    c = (k - 273.15);
                    cout << "A temperatura em kelvin eh: " << c;
                }

            } while(esc2 != 'F' && esc2 != 'C');
        }
    } while(esc1 != 'C' && esc1 != 'F' && esc1 != 'K');

    return 0;
}