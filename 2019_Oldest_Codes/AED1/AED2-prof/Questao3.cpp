#include <iostream>
using namespace std;

string converte(string texto)
{
    string saida="";
    char alfabeto[26]={'a','b','c','d','e','f','g','h','i','j',
                       'k','l','m','n','o','p','q','r','s','t',
                       'u','v','w','x','y','z'};
    for(int x=0; x<texto.length(); x++)
    {
      for(int i=0; i<26;i++)
      {
         if(texto[x] == alfabeto[i])
         {
             if(i>=21)
                saida += alfabeto[(i+5)-26];
             else
                saida += alfabeto[i+5];
         }
       }
    }
    return saida;
}
int main()
{
   string palavra;
   cout << "Digite uma palavra ";
   cin >> palavra;
   for(int i= 0 ; i< palavra.length();i++)
        palavra[i]=tolower(palavra[i]);
   cout << converte(palavra);
   return 0;
}
