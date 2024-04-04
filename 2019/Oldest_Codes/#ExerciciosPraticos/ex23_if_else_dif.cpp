// Qual a diferença entre as duas expressões?
#include <iostream>
using namespace std;
int main(){
    
    { 
    int x;
    cout << "Digite um valor para x: ";
    cin >> x;
    
    cout << "Caso 1" << '\n';
        if (x >= 0){
            x = x + 1;
            cout << x << '\n';
        }else if (x >= 1){
            x = x + 2;
            cout << x << '\n';
        }
    
    }
    
    
    { 
    int x;
    cout << "Caso 2"; // A diferença é que o primeiro é aninhado tendo um resultado, o segundo dois.
    cin >> x;
        if (x >= 0){
            x = x + 1;
            cout << x << '\n';
        }
        if (x >= 1){
            x = x + 2;
            cout << x << '\n';
        }
        
    }
 
   
    return 0;
}
