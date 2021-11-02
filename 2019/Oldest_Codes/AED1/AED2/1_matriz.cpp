#include <iostream>
using namespace std;
int main(){
    int matriz[3][6], soma = 0;
    
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 6; j++){
            cout << i << "|" << j << " ";
            cin >> matriz[i][j];
        }
    system("clear");
    
    //Impares
    for(int i = 0; i < 3; i++)
        for(int j = 1; j < 6; j += 2){
            soma += matriz[i][j];
        }
    cout << "A soma é: "<< soma << endl;
    
    //Media
    for(int i = 0; i < 3; i++){
        soma += matriz[i][1] + matriz[i][3];
    }
    cout << "A media da terceira coluna e primeira é: "<<soma / 6 << endl;

    //Substitua
    for(int i = 0; i < 3; i++)
    matriz[i][5] = matriz[i][1] + matriz[i][2];
    
    //Matriz modificada
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 6; j++)
            cout << matriz[i][j] <<"\t";
        
        cout << endl;
    }
    return 0;
}