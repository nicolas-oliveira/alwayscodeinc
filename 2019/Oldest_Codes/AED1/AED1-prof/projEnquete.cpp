/*
    Código feito por: Vânia Borges UEMG/PASSOS
*/


#include <iostream>
#include <locale>
#include<stdlib.h>
using namespace std;

int main ()
{
   int cont1=0, cont2=0, cont3=0, contnulo=0, contbranco=0;
   int total=0, op=0;
   setlocale(LC_ALL,"portuguese");
   do
   {
       cout << "Enquete Eleicaoo CA" << endl;
       cout << "1 - Chapa blo" << endl;
       cout << "2 - Chapa Eca" << endl;
       cout << "3 - Chapa Chita" << endl;
       cout << "4 - Nulo" << endl;
       cout << "5 - Branco" << endl;
       cout << "0 - Sairrrr" << endl;
       cin >> op;
       switch (op)
       {
           case 1 : cont1++;
                    total ++;
                    break;
           case 2 : cont2++;
                    total ++;
                    break;
           case 3 : cont3++;
                    total ++;
                    break;
           case 4 : contnulo++;
                    total ++;
                    break;
           case 5 : contbranco++;
                    total ++;
                    break;
           case 0 : cout << "Finalizando...." << endl;
                    break;
           default : cout << "Digite um valor entre 0 e 5"<<endl;
       }
   }while(op !=0);
   system("CLS");
   cout << "RESULTADO!!!" << endl;
   cout << "Chapa blo " << (cont1*100 / total) <<"%" << endl;
   cout << "Chapa Eca " << (cont2*100 / total) <<"%"<<endl;
   cout << "Chapa Chita " << (cont3*100 / total) <<"%"<<endl;
   cout << "Nulo " << (contnulo*100 / total) <<"%"<< endl;
   cout << "Branco " << (contbranco*100 / total) <<"%"<<endl;
   return 0;
}
