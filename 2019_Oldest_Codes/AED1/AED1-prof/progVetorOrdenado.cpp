/*
    Código feito por: Vânia Borges UEMG/PASSOS
*/


#include <iostream>
using namespace std;

int main(){
  int A[5] , B[5];

    for (int i = 0 ; i < 5; i++){
        cout << "Digite o valor " << (i + 1) << "  : ";
        cin >> A[i];
    }//fecha o for
    //Armazena valores no B
    int maior = A[0];
    // localiza maior valor
    for (int i = 0; i < 5; i++){
        if (maior < A[i])
        maior = A[i];
    }
    
    int menor = A[0];
    for(int j = 0; j < 5; j++){
        menor = maior;
        for (int i = 0; i < 5; i++){
          if (j == 0){
             if(menor > A[i])
             menor = A[i];
          }else{
            if(menor > A[i])
            if((menor > A[i]) && (A[i] > B[(j-1)]) ){
                 menor = A[i];
            }
          }
        }
        B[j]= menor;
        cout <<"B["<< j<< "] = "<< B[j]<< endl;
    }
    return 0;
}
