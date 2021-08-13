#include <iostream>
using namespace std;
float notas(float a, float b, float c, char letra){
    float nota;
    if(letra == 'A' || letra == 'a'){
        nota = a+b+c/3;
        return nota;
    }else if(letra == 'p' || letra == 'P'){
        nota = (a*5)+(b*3)+(c*2)/10;
        return nota;
    }
}
int main(){
    int a,b,c;
    char letra;
    cout << "Digite o parâmetro da nota: ";
    cin >> letra;
    cout << "Digite a nota: ";
    cin >> a;
    cout << "Digite a nota: ";
    cin >> b;
    cout << "Digite a nota: ";
    cin >> c;
    cout << notas(a,b,c,letra) << endl;
    return 0;
}