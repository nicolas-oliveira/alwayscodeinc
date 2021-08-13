#include <iostream>
#include <sstream>
using namespace std;

string binario(int x)
{
   int val;
   if(x == 0)
     return "";
   else{
       stringstream saida;
       val = x%2;
	   saida << val;
      return binario((int)x/2) + saida.str() ;
   }
}
int main()
{
    int d;
    cin >> d;
    cout << "Binário "<< binario(d);
    return 0;
}
