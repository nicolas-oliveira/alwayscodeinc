#include <iostream>
using namespace std;
int main(){
    char escolha;
    float consultar, saldo, saque = 0.0, deposito = 0.0;
    do{
        cout <<"\n(A)Consultar Saldo\n(B)Deposito\n(C)Saque\n(D)Sair\n";
        cin >> escolha;
        cout << "--------------\n";
            switch(escolha)
            {
            case 'a':
                saldo = deposito-saque;
                cout << "O seu saldo é:R$ "<<saldo << endl;
                break;
            case 'b':
                cout << " Digite o valor do deposito:R$";
                cin >> deposito;
                break;
            case 'c':
                cout << "Digite o valor do saque:R$";
                cin >> saque;
                break;
            case 'd':
                cout << "Saindo......" << endl;
                return 0;
            default:
                cout << "Opção não conhecida";
                break;
            }
    }while(true);
    return 0;
}