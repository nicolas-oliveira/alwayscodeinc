// Explicação sucinta de como ocorre a atribuição dos registros de memórias
// e os ponteiros na linguagem C++
#include <iostream>
using namespace std;

int main(){
    // Declaração do ponteiro
    int *p;
    // Declaração do vetor
    int A[10];
    
    // Primeiro, o ponteiro recebe um valor de registro de memória que indica 'A' (vetor)
    p = A;
    cout << "Endereço de memória 1 > " << p << endl;
    
    // Ao incrementar o ponteiro, é incrementado o vetor também:
    *(p++); 
    cout << "Endereço de memória 2 > " << p << endl;
    
    // Atribuindo um valor à variável que o ponteiro indica
    // Sua posição correspondente recebe o valor correspondente
    *p = 10;
    // Mostra o endereço de memória
    cout << endl<< "Endereço de memória 2 > " << p << endl;
    // Indica o valor atribuído pelo ponteiro   
    cout << "Valor atribuído na memória 2 > " << *p << endl;

    // Decrementando o ponteiro volta ao valor '0' do vetor
    // O registro de memória é o mesmo do anterior
    // A variável pode receber o valor que queremos
    *(p--);
    *p = 5;
    cout << endl<< "Endereço de memória 1 > " << p << endl;
    cout << "Valor atribuído na memória 2 > " << *p << endl;

    return 0;
}