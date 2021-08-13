//FACA UM ALGORITMO QUE CALCULE A AREA DE UMA CIRCUNFERENCIA A PARTIR DO VALOR
//DO RAIO -- Formula A = pi*R^2 --- pi = 3.14159

#include <iostream>
using namespace std;
int main(){
    double area, r;
    
    cout << "Digite o valor do raio: ";
    cin >> r;

    area = 3.14159*r*r;
    cout << "A area do circulo é: " << area << endl;
  return 0;
}