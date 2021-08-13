//Elabore um algoritmo que data a idade de um nadador e classifica-o em uma das
// seguintes categorias
// Infantil A = 5 - 7 anos    |   Infantil B = 8 - 10 anos
// Juvanil A = 11 - 13 anos   |   Juvenil B = 14 - 17 anos

#include <iostream>
using namespace std;
int main(){
    int age;

    cout << "Digite sua idade: ";
    cin >> age;

    if(age >= 5 , age <= 7){
        cout << "Infantil A";
    }
    else{
        if(age >= 8 , age <= 10){
            cout << "Infantil B";
        }
        else{
            if(age >= 11 , age <= 13){
                cout << "Juvenil A";
            }
            else{
                if(age >= 14 , age <= 17){
                    cout << "Juvenil B";
                }
                else{
                    cout << "Não pode competir";
                }
            }
        }
    }
    
    return 0;
}