//exemplo do uso e funcionamento dos vetores

#include <iostream> 
using namespace std;
int main(){
    int vet0[100]; //Contem 100 elementos porem comeca pelo 0 ou seja o ultimo eh 99
    int vet1[4] = {0,1,2,3}; //Esta eh a inicializacao
    char vet2[4] = {'a','b','c','d'};


    cout << "Tamanho int: " << sizeof(vet1) << endl; //Cada int contem 4 bites
    cout << "Tamanho char: " << sizeof(vet2) << endl; //Cada char contem 1 bite

    for(int i = 0; i < 100; i++) //Para todo o vetor e necessario a sua inicializacao
        vet0[i] = i; //Para uma linha nao e necessario chaves
    

    for(int i = 0; i < 100; i++){ 
        cout << "Sequencia vet[100]:\n";
        cout << vet0[i] << endl;
    }
    return 0;
}