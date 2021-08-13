/*Calcule o consumo de combustível de um veículo. Leia a distância percorrida em km e 
a quantidade de combustível gasta. Informe o consumo(km/l)*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    float km, g, gg;
    
    /*printf("Digite a distancia(Km): ");
    scanf("%d", &km);
    printf("Digite o valor gasto(l): ");
    scanf("%f", &g);

    gg = (km / g);
    printf("A quantidade de gasolina gasta eh: %f\n", gg);
    printf("%d\n", km);
    printf("%f\n", g);*/

    cout << "Digite a distancia: " << endl;
    cin >> km;
    cout << "Digite o valor gasto(l): " << endl;
    cin >> g;

    gg = (km/g);

    cout << "O consumo é de: " << gg << endl;
    return 0;
}