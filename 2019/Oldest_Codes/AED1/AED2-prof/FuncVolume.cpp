#include<iostream>
using namespace std;


float calcVolume(float raio)
{
    float vol, pi=3.14;
    vol = (4*pi*raio*raio*raio)/3;

    return vol;
}
int main()
{
    float r;
    cout << "Digite o raio da esfera ";
    cin >> r;
    cout << "O volume da esfera é " << calcVolume(r);
    return 0;
}
