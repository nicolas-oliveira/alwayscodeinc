//ELaborar um algoritmo que le 2 valores a e b e os escreve com a mensagem:
//"Sao multiplos" ou "Nao sao multiplos"

#include <iostream>
using namespace std;
int main(){
    int a, b;
    
    cout << "Digite um numero: ";
    cin >> a;
    cout << "Digite outro numero: ";
    cin >> b;
    

    if( ((a % b) == 0) || ((b % a) == 0) ){
        //O operador ou eh: "||" e o "if" exigem que as variaveis recebam outro operador relacional --> "eh igual a"
        // "=" --> 'a' recebe 'b'
        // "==" --> 'a' << eh igual a >> 'b'
        cout << "São multiplos.";
    }else{
        cout << "Não são multiplos.";
    }

    return 0;
}