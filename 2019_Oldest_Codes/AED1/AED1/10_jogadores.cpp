/*
Em um campeonato de futebol existem cinco times e cada um possui
onze jogadores. Faça um programa que receba a idade, o peso e a altura
de cada um dos jogadores, calcule e mostre:
 - A quantidade de jogadores com idade inferior a 18 anos;x
 - A média das idades dos jogadores de cada time;x
 - A média das alturas de todos os jogadores do campeonato; e
 - A porcentagem de jogadores com mais de 80kg entre todos os jogadores do campeonato.x
*/
#include <iostream>
using namespace std;
int main(){
    /*
    times - variavel com o numero de times
    num_j - numero de jogadores
    id    - vetor que guarda a idade do time x, jogador y
    cont_m18 - Conta quantos jogadores sao menores que 18
    cont_ps - Conta quantos jogadores tem mais que 80 kg
    porc_j - Porcentagem da contagem de peso
    ps     - vetor que guarda o peso do time x, jogador y
    alt    - vetor que guarda a altura do time x, jogador y
    media_alt - Guarda a soma de todas as alturas e divide pelo numero de jogadores * numero de times
    media_id  -  Guarda a soma de todas os pesos e divide pelo numero de jogadores * numero de times
    */
    int times, num_j = 11, id[times][num_j], cont_m18 = 0, cont_ps = 0, porc_j = 0;
    float ps[times][num_j], alt[times][num_j], media_alt = 0.0, media_id = 0.0;
    
    cout << "|-------------------------------------|" << endl;
    cout << "|  Programa de registro de jogadores  |" << endl;
    cout << "|   Escolha a quantidade de times     |" << endl;
    cout << "|-------------------------------------|\n" << endl;
    cout << "Digite a quantidade de times: ";
    cin >> times;

    
    for(int n = 1; n <= times; n++){
        cout << "---------" << endl;
        cout << "Time " << n << endl;
        cout << "---------" << endl;
        
        for (int i = 1; i <= num_j; i++){
            cout << "Jogador " << i << endl;
            cout << "Digite a idade: ";
            cin >> id[n][i];
            cout << "Digite o peso: ";
            cin >> ps[n][i];           
            cout << "Digite a altura: ";
            cin >> alt[n][i];
            cout << "---------" << endl;
            
            if(id[n][i] < 18){
            cont_m18++;
            }
            if(ps[n][i] > 80){
            cont_ps++;
            }
            media_id += id[n][i];
            media_alt += alt[n][i];
        }
        media_id /= (float) num_j; //Todas as medias necessitam de uma tranformacao de tipo para float
        cout << "Media das idades do time " << n << ": " << media_id << endl << endl;
        media_id = 0; // Aqui zera a idade para que a proxima media inicialize com 0 e nao com a anterior
    }
    
    media_alt /= (float)(num_j*times); //Media da altura de todos os jogadores de todos os times
    porc_j = ( (float) cont_ps / (float) (num_j * times))* 100.00; //Porcentagem de jogadores com mais de 80kg
 
    
    cout << "\nMenores de 18 anos: " << cont_m18 << endl;
    cout << "Porcentagem de jogadores com mais de 80kg: " << porc_j << "%" << endl;
    cout << "Media das alturas de todos os jogadores: " << media_alt << endl;
    
    return 0;
}