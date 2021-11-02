#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main(){
    string origem, destino, data, hora;
    
    ofstream arquivo;

    arquivo.open("dadosviagem.txt"); 
    getline(cin,origem);
    getline(cin,destino);
    getline(cin,data);
    getline(cin,hora);
    arquivo << origem << "\n";
    arquivo << destino << "\n";
    arquivo << data << "\n";
    arquivo << hora << "\n"; 

    arquivo.close();
    
    return 0;
}