/*
XI Maratona de Programação INI2:

Considerando a entrada de valores inteiros não negativos, ordene estes valores seguindo o seguinte
critério:
  - Primeiro os pares
  - Depois os impares
Sendo que deverão ser apresentados os pares em ordem crescente e depois em ordem decrescente.
 
 Entrada:
A primeira linha de entrada contem um unico inteiro positivo N(1 < N < 10^5) Este é o numero de linhas 
de entrada que vem logo a seguir. As proximas N linhas conterao cada uma delas, um valor inteiro nao
negativo.

 Saida:
Apresente todos os valores lidos na entrada segundo a ordem apresentada acima. Cada numero deve ser
impresso em uma linha, conforme o exemplo a seguir:

Entrada | Saida
----------------
10      |  4
4       |  32
32      |  34
34      |  98
543     |  654
3456    |  3456
654     |  6789
567     |  567
87      |  543
6789    |  87
98      |
---------------

*/
#include <iostream>
using namespace std;
int main(){
    int n, contp = 0 , conti = 0;
    cin >> n;
    int vetn[n], hold;
    
    for(int i = 0; i < n; i++){
        cin >> vetn[i];
    }
    
    for(int i = 0; i < n; i++){
        if(vetn[i] % 2 == 0){
            contp++;
        } else {
            conti++;
        }
    }
	
    cout << endl << contp << "-" << conti << endl << endl;
    
    int vetp[contp], veti[conti];

    for(int i = 0, j = 0; i < n; i++){
        if(vetn[i] % 2 == 0){
            vetp[j] = vetn[i];
            j++;
        }
    }

    for(int i = 0, j = 0; i < n; i++){
        if(vetn[i] % 2 != 0){
            veti[j] = vetn[i];
            j++;
        }
    }

    for(int i = 0; i < contp-1; i++){
        for(int j = 0; j < contp-1; j++){
            if(vetp[j] > vetp[j+1]){
                hold = vetp[j];
                vetp[j] = vetp[j+1];
                vetp[j+1] = hold;
            }
        }
    }

    for(int i = 0; i < conti-1; i++){
        for(int j = 0; j < conti-1; j++){
            if(veti[j] < veti[j+1]){
                hold = veti[j];
                veti[j] = veti[j+1];
                veti[j+1] = hold;
            }
        }
    }

    for (int i = 0; i < contp; i++){
        cout << vetp[i] << endl;
    }

    for (int i = 0; i < conti; i++){
        cout << veti[i] << endl;
    }
    return 0;
}