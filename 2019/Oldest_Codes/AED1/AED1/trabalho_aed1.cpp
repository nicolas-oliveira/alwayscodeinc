#include <iostream>
#include <math.h>
using namespace std;
int main(){
    //DECLARACAO DAS VARIAVEIS
    int intv[4]; //int1, int2, int3, int4
    float real[3];  //real1,[0] real2,[1] real3,[2] 
    float IMP[5]; //IMP1, IMP2 IMP3 IMP4
    char ocupacao[25], isento[] = "APOSENTADO";
    
    //RECEBENDO OS DADOS
    for(int i = 0; i < 4; i++ ){
        cout << "int" << i + 1 << " = ";
        cin >> intv[i];
    }
    for(int i = 0; i < 3; i++){
        cout << "real" << i + 1 << " = ";
        cin >> real[i];
    }
    cout << "Digite a ocupacao: ";
    cin >> ocupacao;
    //DECLARACAO DAS FORMULAS
    IMP[0] = 100*(intv[0]/intv[1]) + real[0];
    IMP[1] = intv[0] * (intv[1] % 5) - intv[2] / 2;
    IMP[2] = pow(intv[3], 2) + (real[1] / 4) * intv[0] - 3;
    IMP[3] = intv[0] + pow(intv[1], 2) + round(real[2]);
    IMP[4] = 1 + 5 * pow(intv[1], 3) + 2 * intv[2] - trunc(real[0] - 1);
    
    system("cls"); //LIMPA A TELA
    
    //MOSTRANDO OS VALORES OBTIDOS
    cout << "--------------------------------------------------------------\n";
    cout << "VALORES LIDOS: \n";
    cout << "--------------------------------------------------------------\n";
    for(int i = 0; i < 4; i++ ){
        cout << "int" << i+1 << " = "<< intv[i] << " / " ;
    }
    cout << endl;
    for(int i = 0; i < 3; i++ ){
        cout << "real" << i+1 << " = "<< real[i] << " / " ;
    }
    cout << endl << ocupacao;
    
    //MOSTRANDO OS VALORES DOS IMPOSTOS SEGUNDO O CALCULO DADO
    cout << "\n--------------------------------------------------------------\n";
    cout << "IMPOSTO: \n";
    cout << "--------------------------------------------------------------\n";
    for (int i = 0; i < 5; i++){
      cout << "Imp" << i+1 << ": " << IMP[i] << endl;
    }
    
    if(ocupacao == isento){
      cout << "Isento: True\n";
    }else{
      cout << "Isento: False";
    }
    cout << "\n--------------------------------------------------------------\n";
    system("pause");
	return 0;
}
