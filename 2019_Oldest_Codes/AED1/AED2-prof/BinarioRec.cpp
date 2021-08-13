#include <iostream>
#include <sstream>
using namespace std;
void converteBinario(int d)
{
    int x;
    stringstream aux;
    string saida="";
    while(d!= 0)
    {
       x = d%2;
       aux << x;
       d = d/2;
    }
    saida = aux.str();
    for(int i=saida.length() ; i>=0; i--)
        cout << saida[i];
}
void converteBinarioRec(int d)
{
    int x;
    stringstream aux;
     if(d == 0)
        cout << "";
     else{
       x = d%2;
       aux << x;
       converteBinarioRec(d/2);
       cout << aux.str();
    }
}
int main()
{
    int d;
    cout << "Digite o valor decimal ";
    cin >> d;
    converteBinarioRec(d);
}
