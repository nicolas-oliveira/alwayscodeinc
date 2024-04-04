#include<iostream>
using namespace std;


float calMedia (float n1, float n2, float n3, char tipo)
{
    float media;
    if(tipo =='A')
        media = (n1+n2+n3)/3;
    if(tipo== 'P')
        media = (n1*5+n2*3+n3*2)/10;
    return media;
}

int main()
{
   float n1, n2,n3;
   char letra;
   cout << "Digite as notas do aluno " ;
   cin >> n1>> n2>>n3;

   cout << "Tipo de média desejada ";
   cin >> letra;

   cout <<calMedia(n1, n2, n3, letra);
   return 0;
}
