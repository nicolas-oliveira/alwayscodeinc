#include <iostream>
#include <locale>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    float x[10],hold;
    int i=0;

    while(i < 10){
        cout << "Digite o elemento " << i+1 << ": ";
        cin >> x[i];
        i++;
    }
    for(int i = 1; i < 10; i++){
        for(int j = i; j > 0; j--){
            if(x[j] < x[j-1]){
                hold = x[j];
                x[j] = x[j-1];
                x[j-1] = hold;
            }
        }
    }
    i = 0;
    while (i<=9){
        cout << i+1 << "Elemento: "<< x[i] << endl;
        i++;
    }
return 0;}
