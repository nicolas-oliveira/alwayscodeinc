#include <iostream>
using namespace std;

void listaPares(int num)
{
    if(num == 0)
        cout << num;
    else{
        listaPares(num-2);
        cout << num;
    }
}

int main()
{
   int num;
   cout << "Digite um valor par ";
   cin >> num;
   listaPares(num);
   return 0;
}
