
#include<iostream>
#include<locale>
using namespace std;

string codifica ( string texto)
{
     string saida="";
       char alfabeto[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
       for (int x =0 ; x<texto.length(); x++)
        {
            texto[x] = tolower(texto[x]);
            for(int i=0; i<26;i++)
            {
                if(texto[x]== alfabeto[i])
                    if(i>=21)
                      saida += alfabeto[4-(25-i)];
                    else
                    saida += alfabeto[i+5];
             }
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
