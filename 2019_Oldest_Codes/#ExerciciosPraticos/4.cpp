#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int a, i;
    float n;
    cout << "Escolha um valor da copia: ";
    cin >> n;
    cout << "-----------------" << endl;
    for (i = 10; i <= 200; i = i + 10){
        cout << i << " = " << n * i << endl;
        cout << "-----------------" << endl;
    }

    system("pause");
    return 0;
}