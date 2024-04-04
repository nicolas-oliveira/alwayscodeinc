//Calcule a media aritmetica das 3 notas de um aluno e mostre, alem do valor
//da media, uma mensagem de "Aprovado", caso a media seja igual ou superior a 6,
//ou a mensagem "Reprovado", caso contrario.

#include <iostream>
using namespace std;

int main(){
    double a, b, c, m;

    cout << "Digite sua primeira nota: ";
    cin >> a;

    cout << "Digite sua segunda nota: ";
    cin >> b;

    cout << "Digite sua terceira nota: ";
    cin >> c;
    
    m =  (a + b + c ) / 3.0;
    cout << m << endl;
    if(m >= 6){
       cout << "APROVADO :)";
    }
    else{
        cout << "REPROVADO :(";
    }
   
   return 0;
}