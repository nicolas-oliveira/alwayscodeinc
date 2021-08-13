//Leia o ano atual e o ano de nascimento, calcule e imprima a idade atual e em 2060
//Agora a possibilidade de aparecer idade negativa nao acontece
#include <iostream>
#include <stdio.h>

using namespace std;
int main(){    
    int at, an, id, idf;

    cout << "Ano atual: ";
    cin >> at;

    cout << "Ano de nascimento: ";
    cin >> an;
    
    if((an < at) && (an > 0)){
        id = (at - an);
        cout << "A sua idade eh: " << id << endl;
    }
    else{
        cout << "Voce nasceu no futuro?" << endl;
    }
    if((at < 2060) && (at > 0)){
            idf = (2060 - an);
            cout << "Idade em 2060: " << idf << endl;
    }
     
return 0;
}