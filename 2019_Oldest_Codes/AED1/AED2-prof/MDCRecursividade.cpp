#include <iostream>

using namespace std;
//sem recursividade
int MDC (int a, int b)
{
    int c;
    while(a%b !=0)
    {
        c = a%b;
        a = b;
        b = c;
    }
    return b;
}
//com recursividade
int MDCRec (int a, int b)
{
    int c;
    if(a%b !=0)
    {
        return MDCRec(b, a%b);
    }
    else
        return b;
}
int main()
{
    int a, b;
    cin >> a >> b;
    if (b>a) // mantém em a o maior valor lido
    {
        int x = b;
        b=a;
        a=x;
    }
    cout << "MDC é " << MDCRec(a,b);
}
