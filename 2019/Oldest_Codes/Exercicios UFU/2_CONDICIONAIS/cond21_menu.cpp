/*
 Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação esco-
lhida. Escreva uma mensagem de erro se a opção for inválida.
    Escolha a opcao:
    1- Soma de 2 números.
    2- Diferença entre 2 números (maior pelo menor).
    3- Produto entre 2 números.
    4- Divisao entre 2 números (o denominador nao pode ser zero).
    Opçao
*/
#include <iostream>
using namespace std;
float input(float num){
    cout << "Digite um numero: ";
    cin >> num;
    return num;
}
int main(){
    int a;
    float num1,num2, n;
    ;
    do{
        system("clear");
        cout << "1- Soma de 2 números.\n";
        cout << "2- Diferença entre 2 números (maior pelo menor).\n";
        cout << "3- Produto entre 2 números.\n";
        cout << "4- Divisao entre 2 números (o denominador nao pode ser zero).\n";
        cin >> a;
    }while(a < 1 && a > 4);
    
    switch (a)
    {
    case 1:
        num1 = input(num1);
        num2 = input(num2);
        cout << "Soma: " << num1+num2 << endl;
        break;
    case 2:
        num1 = input(num1);
        num2 = input(num2);
        if(num1 > num2)
        cout << "DIFERENCA: " << num1-num2 << endl;
        if(num2 > num1)
        cout << "DIFERENCA: " << num2-num1 << endl;
        break;

    case 3:
        num1 = input(num1);
        num2 = input(num2);
        cout << "PRODUTO: " << num1*num2 << endl;
        break;

    case 4:
        num1 = input(num1);
        num2 = input(num2);
        cout << "DIVISAO: " << num1/num2 << endl;
        break;

    
    default:
        break;
    }
    return 0;
}
