//Escreva um algoritmo que leia as 3 notas de um aluno e calcule sua media
//ponderada, considerando que o peso para a maior nota seja 4 e para as duas
// restantes 3. Se a media calculada for maior ou igual que 5 escreva "APROVADO"
// Se neo, escreva "REPROVADO".

#include <iostream>
using namespace std;
int main(){
    double n1, n2, n3, m;
    cout << "Digite sua primeira nota: ";
    cin >> n1;

    cout << "Digite sua segunda nota: ";
    cin >> n2;

    cout << "Digite sua terceira nota: ";
    cin >> n3;

    if(n1 >= n2 , n1 >= n3){
        m = ((n1*4) + (n2*3) + (n3*3)) / 10;
        cout << "A media eh:" << m << endl;
    }else{
        if(n2 >= n1 , n2 >= n3){
             m = ((n1*3) + (n2*4) + (n3*3)) / 10;
        cout << "A media eh:" << m << endl;
        }
        else{
             m = ((n1*3) + (n2*3) + (n3*4)) / 10;
             cout << "A media eh:" << m << endl;
        }
    }
    
    if(m >= 5){
        cout << "VOCE FOI APROVADO(A) :)";
    }
    else{
        cout << "VOCE FOI REPROVADO(A) :(";
    }
    return 0;
}