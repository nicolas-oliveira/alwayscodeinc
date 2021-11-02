// 20. Escreva um programa que leia números inteiros no intervalo [0,50] e os armazene em um
// vetor com 10 posições. Preencha um segundo vetor apenas com os números ı́mpares
// do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.
#include <iostream>
using namespace std;

int a[10]; 

int countImpar(){
    int count = 0;
    for (int i = 0; i < 10; i++){
        if(a[i] % 2 != 0 ){
            count++;
        }
    }
    return count;
}

int main() {
    for (int i = 0; i < 10; i++){
        int num;
        cout << "Digite um num: ";
        cin >> num;
        while ( num < 0 || num > 50 ){
            cout << "O número não corresponde ao intervalo \n";
            cout << "Digite novamente: ";
            cin >> num;
        }
        a[i] = num;
    }

    int count = countImpar();

    int b[count];
    
    int j = 0;
    
    for (int i = 0; i < 10; i++){
        if(a[i] % 2 != 0 ){
            b[j] = a[i];
            j++;
        }
    }
    
    for (int i = 0; i < 10; i++){
        cout << a[i] << " ";
        i++;
        cout << a[i] << endl;
    }
    cout << "===================\n";
    
    for (int i = 0; i < count; i++){
        cout << b[i] << " ";
        i++;
        cout << b[i] << endl;
    }
    return 0;
}