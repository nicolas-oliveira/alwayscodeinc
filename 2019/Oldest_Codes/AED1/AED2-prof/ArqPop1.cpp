#include <iostream>
#include <fstream>

int main()
{
    string cidade;
    int pop;
    ofstream arq("cidades.txt");
    for(int i=1; i <= 5; i++)
    {
        cout << "Nome " ;
        getline(cin, cidade);
        cout << "População ;
        cin >>  pop;
        arq << cidade << "\n" ;
        arq << pop << "\n" ;
    }
    cout <<endl;
    arq.close();

}
