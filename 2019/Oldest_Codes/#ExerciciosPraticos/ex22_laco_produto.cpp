//Fazer um programa que de escolha de soma ou produto de dois numeros
#include <iostream>
#include <cctype>
using namespace std;
int main(){
    char c1;
    int p, s, a, b;
    cout << "Digite um numero: ";
        cin >> a;
        system("clear");
    
    cout << "Digite outro numero: ";
        cin >> b;
        system("clear");
    cout << "Escolha produto ou soma (P ou S): ";
    do{
        cin.get(c1);
        c1 = toupper(c1);
        system("clear");       
        if(c1 == 'P'){
            p = a * b;
            cout << "O produto é: " << p;
            }

            if(c1 == 'S'){
                p = a + b;
                cout << "A soma é: " << p;
                }
    }while(c1 != 'P' && c1 != 'S');

    return 0;
}