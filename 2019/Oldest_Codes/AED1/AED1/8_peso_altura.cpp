/*
Faça um programa que receba a altura e o peso de uma pessoa. De
acordo com a tabela a seguir, verifique e mostre a classificação da pessoa:
|------------------|---------------------------------------------------------|
|                  |                     PESO                                |
|      ALTURA      |---------------------------------------------------------|
|                  |   ATÉ 60   |   ENTRE 60 E 90    |       ACIMA DE 90     |
|------------------|------------|--------------------|-----------------------|
| Menores que 1,20 |      A     |         D          |           G           |
| De 1,20 a 1,70   |      B     |         E          |           H           |
| Maiores que 1,70 |      C     |         F          |           I           |
|------------------|------------|--------------------|-----------------------|
*/
#include <iostream>
using namespace std;
int main(){
    float alt, p;
    cout << "Digite a altura: ";
    cin >> alt;
    cout << "Digite o peso: ";
    cin >> p;
    if(alt < 1.2 && p <= 60){
        cout << "A" << endl;
    }else if(alt < 1.2 && p >= 60 && p < 90){
        cout << "D" << endl;
    }else if(alt < 1.2 && p >= 90){
        cout << "G" << endl;
    }else if(alt >= 1.2 && alt < 1.7 && p >= 60){
        cout << "B" << endl;
    }else if(alt >= 1.2 && alt < 1.7 && p >= 60 && p < 90){
        cout << "E" << endl;
    }else if(alt >= 1.2 && alt < 1.7 && p >= 90){
        cout << "H" << endl;
    }else if(alt >= 1.7 && p <= 60){
        cout << "C" << endl;
    }else if(alt >= 1.7 && p >= 60 && p < 90){
        cout << "F" << endl;
    }else if(alt >= 1.7 && p >= 90){
        cout << "I" << endl;
    }
    return 0;
}