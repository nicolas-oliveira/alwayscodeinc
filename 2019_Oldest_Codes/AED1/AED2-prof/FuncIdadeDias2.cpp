#include <iostream>
#include <locale>
using namespace std;

int converte(int a, int m, int d)
{
    return a*365+m*30+d;
}
int main()
{
   int ano, mes, dia;
   setlocale(LC_ALL, "portuguese");
   cout << "Informe sua idade com ano, mês e dia\n";
   cin >> ano >> mes>> dia;
   cout << "Sua idade em dias é " <<converte(ano, mes, dia);
   return 0;
}
