#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
    string op;
    string data, hora, disciplina;
    float valor;
    do{
        cout << "Escolha uma opcao :" << endl;
        cout << "A - Leitura \nB - Armazenamento \nC- Sair\n";
        cin >> op;
        if (op == "A")
        {
            ifstream arq;
            int i=0;
            arq.open("provas.txt", ios::in);
            cout << setiosflags(ios::left) << setw(20) << "Disciplina" <<
                  setw(15) << "Data" << setw(15) << "Hora" <<
                  setw(10) << "Valor" << endl;
            while(arq >> disciplina >> data >> hora >> valor)
            {
                cout << setiosflags(ios::left) << setw(20) <<
                     disciplina << setw(15) << data <<
                     setw(15) << hora << setw(15) << valor << endl;
            }
           arq.close();
        }
        if(op=="B")
        {
            ofstream arq1 ;
            arq1.open("provas.txt", ios::app);
            cout << "Digite a data da prova ";
            cin >>data;
            cout << "Digite o horario da prova ";
            cin >>hora;
            cout << "Digite o valor total da prova ";
            cin >>valor;
            cout << "Digite o nome da disciplina ";
            cin >>disciplina;

            arq1 << disciplina << " " <<data << " " <<hora
                 << " "<<valor<< "\n";
            arq1.close();
        }
    }while(op != "C");
    return 0;
}
