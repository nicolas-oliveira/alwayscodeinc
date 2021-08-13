/*
Um ponteiro eh uma variavel que contem o endereco de outra variavel 
guardada na memoria inteirna do computador

*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int var = 10; // Declaracao de uma variavel
    int* pvar; //Declaracao de um ponteiro

    pvar = &var; //Inicializacao do ponteiro
    cout << *pvar << endl;
    
    *pvar = 20; //Pode-se alterar o valor da variavel
    cout << *pvar << endl;
    cout << var << endl;
    return 0;
}
