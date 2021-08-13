/*
Exemplos de funcoes com vetores de caracteres
*/

#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char const *argv[]){
    int i = 0;
    char nome[] = {'n','i','c','o','l','a','s','\0'};//Caracter nul ou caracter 0 usado para finalizar cadeias de caracteres
    char nome1[] = {'n','i','c','o','l','a','s'}; //Isto e uma string, uma cadeia de caracteres
    char nome2[] = "nicolas"; //Formato comum e usual
    
    
    cout << "\nSaida com cout:"<< endl; 
    cout << nome << endl; 
    
    
    cout << "\nSaida com while:"<< endl; 
    while(nome[i]){ //exemplo do output de uma string
        cout << nome[i];
        i++;
    }

    
    cout << "\n\nSaida com while finalizado em \\0:"<< endl; 
    while(nome1[i] != '\0'){
        cout << nome1[i];
        i++;
    }

    cout << "\n\nSaida com cout com char nome2[] = \"\":"<< endl; 
    cout << nome2 << endl;

    
    cout << endl; 
    
    int tam;
    i = 0;
    //Obtendo o tamanho da string
    for (tam = 0; nome[tam]; tam++);
        cout << "O tamanho da string eh: " << tam << endl;

    
    cout << "\nInvercao do caracter atraves do 'for':"<< endl; 
    for(int i = tam - 1; i >= 0; i--)
        cout << nome[i];
    
    
    cout << "\n\nVerificacao do primeriro char do nome[0]: "<< nome[0] <<  endl; 
    //Verificar o primeiro caractere da string
    
    if (isalpha(nome[0])){ //Verifica se e uma letra ou numero 'true' para letra , 'false' para numero
        cout << "eh caractere alfabetico" << endl;
    }else{
        cout << "eh caractere numerico" << endl;
    }
    
    
    if (isdigit(nome[0])){ //Verifica se eh uma letra ou um numero 'true' para numero, false 'letra'
        cout <<"eh um numero" << endl;
    }else{
        cout << "eh uma letra" << endl;
    }


    cout << "\n\nVerificacao da cadeia de caract. do nome[0]: "<< nome <<  endl;
    if (isupper(nome[0])){ // Verifica se eh maiusculo se 'true' entao maiusculo se 'false' entao minusculo
        cout << "primeira maiuscula" << endl;
    }else{
        cout << "primeira minuscula" << endl;
    }

    
    if (strcmp(nome, nome1)){
        cout << "strings iguais" << endl;
    }else{
        cout << "strings diferentes" << endl;
    }

    return 0;
}
