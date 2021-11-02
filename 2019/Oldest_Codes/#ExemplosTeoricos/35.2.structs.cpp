#include <iostream>
using namespace std;
struct T_pessoa{
    string nome;
    float altura;
    string data;
};
int main(){
    struct T_pessoa pessoa[10];
    
    for(int i = 0; i < 2; i++){
        cout << "Digite o nome: ";
        cin >> pessoa[i].nome;
        
        cout << "Digite a data: ";
        cin >> pessoa[i].data;
        
        cout << "Digite a altura: ";
        cin >> pessoa[i].altura;
    }
    for(int i = 0; i < 2; i++){
        cout << pessoa[i].nome << endl;
    }
    return 0;
}