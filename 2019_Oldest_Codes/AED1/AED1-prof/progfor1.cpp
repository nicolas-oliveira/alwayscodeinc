/*
    Código feito por: Vânia Borges UEMG/PASSOS
*/


#include <iostream>

using namespace std;

int main()
{
    int i, contAprov=0, contReprov=0, contRec=0;
    float n1, n2, media=0, mediaClasse=0;

    for (i=1; i<=6; i++)
    {
        cout << "Digite a Nota1 : ";
        cin >> n1;
        cout << "Digite a Nota2 : ";
        cin >> n2;
        media = (n2 + n1)/2;
        cout << "M�dia = "<< media;
        if(media <4)
        {
            contReprov++; // contReprov = contReprov +1;
            cout << "Reprovado"<< endl;
        }
        if((media >=4) && (media <6))
        {
            contRec++;
            cout << "Recupera��o"<< endl;
        }
        if(media >=6)
        {
            contAprov++;
            cout << "Aprovado"<< endl;
        }
        mediaClasse +=media;//mediaClasse = mediaClasse + media;
    }// fecha o for
    mediaClasse = mediaClasse/6;
    cout << "M�dia da turma ="<< mediaClasse << endl;
    cout << "Aprovados = "<< contAprov << endl;
    cout << "Reprovados = "<< contReprov << endl;
    cout << "Recupera��o = "<< contRec<< endl;
    return 0;
}//fecha o main
