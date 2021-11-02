/*
Faça um programa que receba duas notas de seis alunos. Calcule e
mostre:
 A média aritmética das duas notas de cada aluno; e
 A mensagem que está na tabela a seguir:
|----------------------|----------------|
|  MÉDIA ARITMÉTICA    |     MENSAGEM   |
|----------------------|----------------|
|  Até 3               |   Reprovado    | 
|  Entre 3 e 7         |   Exame        | 
|  De 7 para cima      |   Aprovado     |
|----------------------|----------------|
-O total de alunos aprovados;
-O total de alunos de exame;
-O total de alunos reprovados;
-A média da classe.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int num_a, a[num_a], b[num_a], m[num_a], rep = 0, exm = 0, apr = 0;
    float mt = 0;
    cout << "|--------------------------------------|" << endl;
    cout << "|Progama de calculo de media dos alunos|" << endl;
    cout << "|       Nota calculada de 0 a 10       |" << endl;
    cout << "|--------------------------------------|\n" << endl;
    cout << "Digite a quantidade de alunos: ";
    cin >> num_a;

    for (int i = 1; i <= num_a; i++){
        do{
        
        cout << "Digite a nota do Aluno " << i << ": ";
        cin >> a[i];
        cout << "Digite a nota do Aluno " << i << ": ";
        cin >> b[i];
        if (a[i] > 10 || b[i] > 10){
            system("clear");
            cout << "Nota acima do esperado, digite novamente.." << endl;
        }
        
        }while(a[i] > 10 || b[i] > 10);
        system("clear");
    }

    for (int i = 1; i <= num_a; i++){ //Calcula as medias
        m[i] = (a[i] + b[i]) / 2;
        mt += m[i]; //Soma as medias
    }
    
    mt /= num_a; //A soma total da turma dividido pela quantidade de alunos
    
    for (int i = 1; i <= num_a; i++){
        if (m[i] <= 3){
            rep++;
        }else if(m[i] > 3 && m[i] < 7){
            exm++;
        }else if(m[i] >= 7){
            apr++;
        }
    }
    
    for (int i = 1; i <= num_a; i++){ // Saida dos dados dos alunos
        cout << "-----------" << endl;
        cout << "Aluno " << i  << endl << "Media: " << m[i] << endl;
        if (m[i] <= 3){
            cout << "REPROVADO" << endl;
        }else if(m[i] > 3 && m[i] < 7){
            cout << "EXAME"<< endl;
        }else if(m[i] >= 7){
            cout << "APROVADO"<< endl;
        }
    }
    
    cout << "-----------" << endl;
    cout << "Media da turma: " << mt << endl;
    cout <<"Reprovados: " << rep << endl << "Exame: " << exm << endl << "Aprovados: "<< apr << endl ;
    cout << "-----------" << endl;

    return 0;
}
