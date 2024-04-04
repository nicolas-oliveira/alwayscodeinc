#include<iostream>
using namespace std;
//'b² -4ac'
float Expr(float a, float b, float c)
{
   float s=0;
   s = b*b -4*a*c;
   return s;
}
int main()
{
    float a, b, c;
    cout << "Digite valor do coeficiente a ";
    cin >> a;
    cout << "Digite valor do coeficiente b ";
    cin >> b;
    cout << "Digite valor do coeficiente c ";
    cin >> c;
    cout <<"O valor da expressão b² -4ac é " << Expr(a,b,c);
    return 0;
}
