#include <iostream>
#include <locale>
//Gustavo Faria
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    float x1[10],hold;
    int i=0,j=0;

    while(i<=9){
        cout << "Digite o numero " << i+1 << ": ";
        cin >> x1[i];
        i++;
    }
    for(int i = 0; i < 9; i++)
        for(int j = i; j > 0; j--){
            if(x1[j] < x1[j-1]){
                hold = x1[j];
                x1[j] = x1[j-1];
                x1[j-1] = hold;
            }
        }
    
    while(i <= 9){
        cout << i+1 << " elemento: " << x1[i] << endl;
        i++;
    }
return 0;}
