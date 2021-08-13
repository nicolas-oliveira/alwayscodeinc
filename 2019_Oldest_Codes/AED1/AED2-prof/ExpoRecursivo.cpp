#include <iostream>
#include <locale>
using namespace std;

int expo( int x, int n)
{
    if (n == 1)
        return x;
    else
        return x * expo(x, n-1);
}

int main()
{
    setlocale(LC_ALL,"portuguese");
	int x, n;
    cout << "Digite o valor  da base ";
    cin >> x;
    cout << "Digite o valor do expoente ";
    cin >> n;
    cout << "x^n é " << expo(x,n);

    return 0;
}
