#include <iostream>
#include <locale>
using namespace std;
string getMeio(int c)
{
    string meio =" * ";
    if (c ==1)
        return meio;
    else
        return meio + getMeio(c-2);
}
 void desenha(int col)
 {
     // Substituído por getMeio()
     string branco =" ";
     char aux = 254;
     for(int i = 1; i<=col-1; i++)
     {
         branco += "  ";
     }
     // monta o quadrado
     for(int i = 1; i<=col; i++)
     {
         cout<<aux +" ";
     }
     cout<<endl;
     // monta meio do quadrado
     for(int i = 1; i<=col; i++)
        cout<<"*"<<getMeio(col)<<"*"<<endl;

     for(int i = 1; i<=col; i++)
     {
         cout<<"* ";
     }

 }

int main()
{
  int col;
  setlocale(LC_ALL,"portuguese");
  cout << "Digite o número máximo de colunas ";
  cin >> col;
  desenha(col);
}
