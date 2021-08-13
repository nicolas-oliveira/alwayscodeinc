#include <iostream>
#include <locale>

using namespace std;

int main ()
{
    setlocale(LC_ALL,"portuguese");
    string frase;
    cout << "Digite sua frase ";
    getline (cin , frase);
    int pos=0,cont =0;
    pos = frase.find("ada");
    while(pos != -1)
    {
        cont++;
        frase= frase.substr(pos+1);
        pos = frase.find("ada");
    }
    cout << "ada aparece " << cont <<"x";
    return 0;
}
