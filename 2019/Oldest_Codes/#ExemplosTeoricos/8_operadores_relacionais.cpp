// Estudando operadores relacionais 

#include <iostream>
using namespace std;
int main() {
    bool b = true;
    bool b2 = (1==1);
    
    //Sempre True = 1 pois true é 1 e false é 0
    
    cout << "O valor contido em 'b' é igual a: " << b << endl;
    cout << "O valor contido em 'b2' é igual a: " << b2 << endl;
    
    bool c = 0;
    bool c2 = 1;
    cout << "O valor é: " << (c2 == true) << endl;
    //Verifica se o valor c2 é igual a true
    return 0;
}