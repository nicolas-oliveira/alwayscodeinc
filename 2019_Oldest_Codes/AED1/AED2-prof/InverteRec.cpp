#include <iostream>
using namespace std;

void inverte(int n)
{
    if (n/10 == 0)
        cout << n;
    else{
       cout << n%10;
       inverte(n/10);
    }
}

int main()
{
   int num;
   cin >> num;
   inverte(num);
   return 0;
}
