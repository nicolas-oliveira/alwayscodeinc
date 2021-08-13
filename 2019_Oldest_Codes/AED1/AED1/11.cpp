#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int a, i;
    float n;
    cout << "Escolha um valor da copia: ";
    cin >> n;
    cout << "Escolha a quantidade de copias: ";
    cin >> a;
    for (i = 1; i <= a; i = i + 10){
        cout << i << " ";
        i = i * n;
        cout << i << endl;

    }

    system("pause");
    return 0;
}
