#include<iostream>
#include<locale>
using namespace std;
string codifica ( string texto)
{
     string saida="";
      for (int x =0 ; x<texto.length(); x++)
        {
             if(texto[x]>=118)
                // 96 pq a letra a começa na posição 97
                saida +=  96+(texto[x]+5 -122);
             else
                saida += texto[x] +5;
         }
      return saida;
}
int main()
{
    string palavra, saida="";
    setlocale(LC_ALL,"portuguese");
    cin >> palavra;
    cout << codifica(palavra);
    return 0;
}
