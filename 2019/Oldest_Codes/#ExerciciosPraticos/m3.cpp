#include <iostream>
using namespace std;
int main(){
    int vet[4], a = 0;
    for(int i=0; i < 4; i++){
        cout << "Digite o " << i+1 << " numero: ";
        cin >> vet[i];
        if(vet[i] > 10){
            a += 1;
        }
    }
    cout << a;

    return 0;
}
