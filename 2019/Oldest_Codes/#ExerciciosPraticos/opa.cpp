#include <iostream>
#include <stdlib.h>
#include <locale>
#include <chrono>
#include <thread>
using namespace std;
//Voce acha o Bradley Cooper bonito?
//Voce ja assistiu porno gay?
//Voce joga lol?
//Voce chupou na brotheragem?
//Voce ja enfiou o chuveirinho do banheiro no cu?
int main(){
    setlocale (LC_ALL, "portuguese");
    char a, b, c, d, e;
    int pc = 0;

    cout << "---------------------------------  \n";
    cout << "| Quantos por cento voce e gay?  | \n";
    cout << "| Digite S para sim e N para n�o | \n";
    cout << "---------------------------------- \n";
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    cout << "Voc� acha o Bradley Cooper bonito? ";
    cin >> a;
    do{
        cin.get(a);
        a = toupper(a);
        system("cls");
        cout << "Voc� acha o Bradley Cooper bonito? ";
        if(a == 'S'){
            pc += 1;
            }
    }while(a != 'S' && a != 'N');
    do{
        cin.get(b);
        b = toupper(b);
        system("cls");
        cout << "Voc� j� assistiu porn� gay? ";
        if(b == 'S'){
            pc += 1;
            }
    }while(b != 'S' && b != 'N');
    do{
        cin.get(c);
        c = toupper(c);
        system("cls");
        cout << "Voc� joga lol?";
        if(c == 'S'){
            pc += 1;
            }
    }while( c != 'S' && c != 'N');
    do{
        cin.get(d);
        d = toupper(d);
        system("cls");
        cout << "Voc� chupou na brotheragem? ";
        if(d == 'S'){
            pc += 1;
            }
    }while(d != 'S' && d != 'N');
    do{
        cin.get(e);
        e = toupper(e);
        system("cls");
        cout << "Voc� j� enfiou o chuveirinho do banheiro no cu?";
        if(e == 'S'){
            pc += 1;
            }
    }while(e != 'S' && e != 'N');
    if(a = 0){
        cout << "Parab�ns !!!! Voc� n�o � GAY!";
    }else{
        if(a = 1){
            pc *= 20;
            cout << "Voc� � " << pc << "\% " << " GAY";
        }else if(a = 2){
            pc *= 20;
            cout << "Voc� � " << pc << "\% " << " GAY";
            }else if(a =3){
                pc *= 20;
                cout << "Voc� � " << pc << "\%" << " GAY";
                }else if(a =4){
                    pc *= 20;
                    cout << "Voc� � " << pc << "\% " << " GAY";
                    }else if(a = 5){
                        a *= 20;
                        cout << "Voc� � " << pc << "\% " << " GAY";
                        }
    }
    //1 - 10% 2 - 20% etc..
    system("pause");
    return 0;
}
