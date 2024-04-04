//Exemplo de declaracao de funcoes

#include <iostream>
using namespace std;

void mensagem(); //DEVE-SE colocar um prototipo de funcao quando a mesma estiver em baixo da principal

bool par(int num){ //UMA FUNCAO QUE RETORNA VERDADEIRO OU FALSO ATRAVES DE UM NUM INT
    if(num % 2 == 0)
        return true; //RETURN sai automaticamente da funcao
    
    return false;
}

int main(){ //ESSA E A FUNCAO PRINCIPAL RETORNA 0
    int n;
    
    mensagem();

    cout << "Digite um numero: ";
    cin >> n;

    if(par(n)){
        cout << "O numero e par." << endl;
    }else{
        cout << "O numero e impar." << endl;
    }
    

    return 0;
}

void mensagem(){
    cout << "aprendendo c++" << endl;
}
