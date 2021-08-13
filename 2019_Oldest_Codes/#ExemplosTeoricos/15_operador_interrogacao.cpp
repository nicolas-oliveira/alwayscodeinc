
#include <iostream>
using namespace std;
int main(){
    float n1, n2;
    cout <<"Introduza dois numeros positivos ou negativos: \n";
    cin >> n1 >> n2;
    
    cout << "if-else \n";
    if (n1 > n2)
        cout << n1 << " > " << n2;
    else
        cout << n2 << " > " << n1;

    cout << endl << "condicional: \n";
    n1 > n2 ? cout << n1 << " > " << n2 : cout << n1 << " < " << n2; 
    
    return 0;
}