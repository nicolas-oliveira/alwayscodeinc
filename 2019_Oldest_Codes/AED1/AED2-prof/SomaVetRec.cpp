#include <iostream>
using namespace std;
//sem recursividade
int SomaVet(int x[], int t)
{
    int s =0;
    for (int i = 0; i<t; i++)
        s = s+ x[i];
    return s;
}
//com recursividade
int SomaVetRec(int x[], int t)
{
    if (t==0)
        return 0;
    else
    return x[t-1] + SomaVetRec(x, t-1);
}
int main()
{
    int v [5];
    for(int i=0; i<5; i++)
        cin >> v[i];
    cout << "O somatório é " << SomaVetRec(v,5) << endl;
    cout << "O somatório é " << SomaVet(v,5);
}
