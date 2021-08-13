/*
    Código feito por: Vânia Borges UEMG/PASSOS
*/

#include<iostream>

using namespace std;

int main()
{
    int vet[3];
    int mat[3][2];
    int saida[2];
//leitura de vetor
    for (int c=0; c<3; c++)
    {
        cout << "valores do vetor ["<<c<<"]: ";
        cin >> vet[c];
    }
//leitura da matriz
    for(int L=0; L<3; L++)
        for(int c =0; c<2; c++)
        {
           cout << "Valores da matriz["<<L<< "]["<<c<<"]: ";
           cin >> mat[L][c];
        }
//calculo do produto
    int aux=0;
    for(int c=0; c< 2; c++)
    {
        for(int L=0; L<3; L++)
            aux = aux + vet[L]*mat[L][c];
        saida[c] = aux;
        aux=0;
        cout << saida[c] << "\t";
    }
    return 0;
}
