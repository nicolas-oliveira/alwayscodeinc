// Leia uma velocidade em km/h e apresente-a convertida em m/s e seu inverso, dê opção ao usuário
// Formula m = k/3.6
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char esc1;
    float k, m;
    do{
        cout << "Escolha uma entrada Km/h ou m/s (k ou m): ";
        cin.get(esc1);
        esc1 = toupper(esc1);
        system("clear");

        if(esc1 == 'K'){ 
            system("clear");
            cout << "Digite o valor em Km/h: ";
            cin >> k;
            m = k/3.6;
            system("clear");
            cout << "O valor convertido é: " << m;
        }
        
        if(esc1 == 'M'){
            system("clear");
            cout << "Digite o valor em m/s: ";
            cin >> m;
            k = m*3.6;
            system("clear");
            cout << "O valor convertido é: " << k;
        }
    
    }while(esc1 != 'K' && esc1 != 'M');
    return 0;
}