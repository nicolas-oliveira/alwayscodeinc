#include <fstream>

using namespace std;

int main()
{
    ofstream nome;
    nome.open("dados.txt");
    for(int i=1 ;i <= 100; i ++)
    {
        nome << i << "\n"; //endl;
    }
    nome.close();
    return 0;
}
        int x = atoi("234");
    cout << x;
