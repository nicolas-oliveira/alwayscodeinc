#include <iostream>
using namespace std;
void troca(int &a, int &b){ // O parâmetro com & torna possivel alterar o valor da variável
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 3;
    int b = 5;
    cout << "a: " << a << " b: " << b << endl;
    troca(a, b);
    cout << "a: " << a << " b: " << b << endl;
    return 0;
}