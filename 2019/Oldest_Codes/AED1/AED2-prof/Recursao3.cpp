#include <iostream>
#include <locale>
using namespace std;
double Fibo(double x)
{
    if ((x ==0) || (x==1))
        return 1;
    else
        return Fibo(x-1) + Fibo(x-2);
}

int main()
{
   int termos;
   cout << "Digite número de termos ";
   cin >> termos;
   double f = Fibo(termos);
   cout << "Fibonacci de "<< termos << " termos é " << f;
   return 0;
}
