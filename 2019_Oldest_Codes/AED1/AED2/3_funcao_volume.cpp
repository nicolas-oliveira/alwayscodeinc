#include <iostream>
using namespace std;
float esfera(float raio){
    float volume;
    volume = 4/3*3.1415*raio*raio*raio;

    return volume;
}
int main(){
    float raio;
    cin >> raio;
    cout << esfera(raio) << endl;
    return 0;
}