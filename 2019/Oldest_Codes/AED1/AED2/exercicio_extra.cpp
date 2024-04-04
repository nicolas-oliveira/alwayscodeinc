/*
Uma locadora de jogos tem guardada, em um vetor A de 500 posiçoes, a quantidade de jogos retirados por 
seus clientes durante o ano de 2018. Agora, esta locadora está fazendo uma promoção e, para cada 20 jogos
retirados, o cliente tem direito a uma locação grátis. Faça uma função que receba o vetor A por parâmetro a
quantidade de locações gratuitas a que cada cliente tem direito.
*/
#include <iostream>
using namespace std;
void registra(string &a[]){
    for(int i=0;i<500;i++){
        cout << "Digite a locacao: ";
        cin >> a[i];
    }
}

void conta(string &nome2, string &a[], int j){
    for(int i = 0; i < 500; i++){
        if(a[i] == nome2){
            j++;
        }
    }
}

int main(){
    string a[500];
    string nome2;
    int var = 0, num, j = 0;
    do{
        system("clear");
        cout << "1- Registra.\n";
        cout << "2- Conta\n";
        cin >> num;
    }while(num < 1 && num > 2);

    switch (num)
    {
        case 1:
        registra(a);
        break;

        case 2:
        cout << "Digite o nome a ser contado: ";
        cin >> nome2;
        conta(nome2, a, j);
        break;
    }

    j /= 20;
    cout << j << endl;
    return 0;
}