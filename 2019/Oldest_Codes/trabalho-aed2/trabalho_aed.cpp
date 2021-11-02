/* 
##############################################################
##  Código feito por:                                       ##
##  Nicolas Oliveira Mariano                                ##
##  <nicolas.oliveira.ug@gmail.com> 2019                    ##
##  C++                                                     ##
##  UNIVERSIDADE DO ESTADO DE MINAS GERAIS                  ##
##############################################################
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h> //Lib padrão do C
#include <string>
#include <sstream> //Para o uso de convesão de tipo string para int
#include <fstream>
//Para os comandos de limpar a tela
#ifdef __unix__         
    #include <unistd.h>
    #include <stdlib.h>
#elif defined(_WIN32) || defined(WIN32) 
   #define OS_Windows
   #include <windows.h>
#endif
using namespace std;

//Constante do maximo de veiculos que o programa pode analisar;
#define MAX_VEICULOS 50

//Variaveis globais usadas pelas funcoes
int menu_number;
fstream arquivo;
string nome[MAX_VEICULOS];
//Funcoes para a manipulacao do texto e das variaveis
void limpa_tela(){

    #ifdef OS_Windows
    /* Codigo Windows */
        system("cls");
    #else
    /* Codigo GNU/Linux */
        system("clear");
    #endif

}


//Definicao da struct do veiculo com suas caracteristicas;
typedef struct {

    int ativo;
    string codigo, marca, modelo, motor, ano; 
    string quilometragem, preco_locacao, categoria, status;
    string ativo_string; //Variavel responsavel por fazer a conversao de string -> int
    int num_categoria;   //Numero da escolha da categoria usada no cadastro (econômico,intermediário, luxo);
    int num_status;      //Numero da escolha usada no status no cadastro (disponível, locado, manutenção);

} Veiculos;

Veiculos veiculos[MAX_VEICULOS];

//Funcao que lista os dados cadastrados conforme o indice informado
void listar(int i){
    if(veiculos[i].ativo == 1){
        cout << "---------------------" << endl;
        cout << "Veiculo " << i+1 << ") " << endl;
        cout << "Codigo: " << veiculos[i].codigo << endl;
        cout << "Marca: " << veiculos[i].marca << endl;
        cout << "Modelo: " << veiculos[i].modelo << endl;
        cout << "Motor: " << veiculos[i].motor << endl;
        cout << "Ano: " << veiculos[i].ano << endl;
        cout << "Quilometragem: " << veiculos[i].quilometragem << endl;
        cout << "Preço de locação: " << veiculos[i].preco_locacao << endl;
        cout << "Categoria: " << veiculos[i].categoria << endl;
        cout << "Status: " << veiculos[i].status << endl << endl;
    }
}
// Funcao que edita atraves de um indice recebido
void editar_por_indice(int i){
    cout << "\nDigite o código __________: " << endl;
        cin >> veiculos[i].codigo;    
        limpa_tela();

        cout << "\nDigite a marca ___________: " << endl;
        cin >> veiculos[i].marca;
        limpa_tela();

        cout << "\nDigite o modelo __________: " << endl;
        cin >> veiculos[i].modelo;
        limpa_tela();

        cout << "\nDigite o motor ___________: " << endl;
        cin >> veiculos[i].motor;
        limpa_tela();

        cout << "\nDigite o ano _____________:" << endl;
        cin >> veiculos[i].ano;
        limpa_tela();

        cout << "\nDigite a quilometragem ___:" << endl;
        cin >> veiculos[i].quilometragem;
        limpa_tela();

        cout << "\nDigite o preço de locação_: " << endl;
        cin >> veiculos[i].preco_locacao;
        limpa_tela();

        cout << "\nEscolha a categoria: " << endl;
        cout << "1 = economico"<< endl << "2 = intermediario" << endl << "3 = luxo" << endl;
        cin >> veiculos[i].num_categoria;
        limpa_tela();

            switch (veiculos[i].num_categoria)
            {
                case 1:
                    veiculos[i].categoria = "economico";
                    break;
                case 2:
                    veiculos[i].categoria = "intermediario";
                    break;
                case 3:
                    veiculos[i].categoria = "luxo";
                    break;
            }

        cout << "Escolha o status: " << endl;
        cout << "1 = disponível"<< endl << "2 = locado" << endl << "3 = manutencao" << endl;
        cin >> veiculos[i].num_status;
        limpa_tela();

            switch (veiculos[i].num_status)
            {
                case 1:
                    veiculos[i].status = "disponivel";
                    break;
                case 2:
                    veiculos[i].status = "locado";
                    break;
                case 3:
                    veiculos[i].status = "manutencao";
                    break;
            }
}
//Funcao responsavel por cadastrar os novos dados do veículo;
void cadastrar(){
    limpa_tela();
    int indice_cadastrar = 0;
    //Verifica e incrementa até que haja algum espaço livre sem cadastro no vetor
    if(veiculos[indice_cadastrar].ativo == 1){
        do{
            indice_cadastrar++;
        }while(veiculos[indice_cadastrar].ativo == 1);
    }
    veiculos[indice_cadastrar].ativo = 1;
    do{
        cout << "# Cadastrar" << endl;
        editar_por_indice(indice_cadastrar);
        cout << "1 - Continuar" << endl;
        cout << "0 - Voltar para o Menu" << endl;
        cin >> menu_number;

        if(menu_number == 1){
            indice_cadastrar++;
            limpa_tela();
            cadastrar();
        }else if(menu_number == 0){
            arquivo.close();
            menu_number = 2; // Apenas para que o menu não feche
            limpa_tela();
            void menu();
        }

    }while(menu_number == 1);
    
}


//Funcao responsavel por editar os dados do veiculo ja cadastrado
void editar(){
        
        for(int i = 0; i < MAX_VEICULOS; i++) 
        listar(i);

        int indice_editar;
        
        cout << "Escolha um veiculo: ";
        cin >> indice_editar;
        
        indice_editar--;
        
        if(veiculos[indice_editar].ativo == 1){
        
            editar_por_indice(indice_editar);
        
        }else{
        
            limpa_tela();
            cout << "Esta posição ainda não foi criada" << endl;
        
        }
}
//Funcao responsavel por editar os dados de devolucao relacionados a locacao
void registrar(){
    int i,num_status;
    
    limpa_tela();
    for(i = 0; i < MAX_VEICULOS; i++){
    listar(i);
    }

    cout << "Escolha o veiculo:";
    cin >> i; 
    limpa_tela();
    
    cout << "Digite o nome do locatario: ";
    cin >> nome[i];
    limpa_tela();

    cout << "Alterar o status: " << endl;
        cout << "1 = disponível"<< endl << "2 = locado" << endl << "3 = manutencao" << endl;
        cin >> num_status;
        limpa_tela();

            switch (num_status)
            {
                case 1:
                    veiculos[i].status = "disponivel";
                    break;
                case 2:
                    veiculos[i].status = "locado";
                    break;
                case 3:
                    veiculos[i].status = "manutencao";
                    break;
            }
}

//Funcao que ira ler os dados requisitados
void consultar(){
    
    string search;
    int num_search; //Numero responsavel pela categoria da pesquisa
    
    limpa_tela();
    
    cout << "# Pesquisar" << endl;
    cout << "1 - Todos" << endl;
    cout << "2 - Marca" << endl;
    cout << "3 - Motor" << endl;
    cout << "4 - Categoria" << endl;
    cout << "5 - Status" << endl;
    cout << "6 - Locações" << endl;
    cin >> num_search;
    
    limpa_tela();
    
    cout << "Pesquisar: ";
    cin >> search;
    
    switch (num_search)
    {
        case 1:
            for(int i = 0; i < MAX_VEICULOS; i++){
                if(search == veiculos[i].codigo || search == veiculos[i].marca || search == veiculos[i].modelo || 
                search == veiculos[i].motor || search == veiculos[i].ano || search == veiculos[i].quilometragem ||
                search == veiculos[i].preco_locacao || search == veiculos[i].categoria || search == veiculos[i].status)
                {
                    listar(i);
                }
            }
            cout << "---------------------" << endl;
            break;
        case 2:
            for(int i = 0; i < MAX_VEICULOS; i++){
                if(search == veiculos[i].marca){
                    listar(i);
                }
            } 
            break;

				        
        case 3:
            for(int i = 0; i < MAX_VEICULOS; i++){
                if(search == veiculos[i].motor){
                    listar(i);
                }
            }
            break;
        case 4:
            for(int i = 0; i < MAX_VEICULOS; i++){
                if(search == veiculos[i].categoria){
                    listar(i);
                }
            }
            break;
        case 5:
            for(int i = 0; i < MAX_VEICULOS; i++){
                if(search == veiculos[i].status){
                    listar(i);
                }
            }
            break;
        case 6:
            for(int i = 0; i < MAX_VEICULOS; i++){
                if(search == veiculos[i].preco_locacao){
                    listar(i);
                }
            }
            break;
    }
}

//Funcao que cria o menu no terminal
void menu(){
    
    limpa_tela();

    do{
        cout << "# Menu" << endl;
        cout << "1 - Cadastrar" << endl;
        cout << "2 - Editar" << endl;
        cout << "3 - Registrar locacao" << endl;
        cout << "4 - Consultar veiculos" << endl;
        cout << "5 - Listar cadastros existentes" << endl;
        cout << "0 - Sair" << endl;
        cin >> menu_number;
        //Switch responsável por chamar as funções
            switch(menu_number)
            {
                case 1:
                    cadastrar();
                    break;
                case 2:
                    editar();
                    break;
                case 3:
                    registrar();
                    break;
                case 4:
                    consultar();
                    break;
                case 5:
                    for(int i = 0; i < MAX_VEICULOS; i++){
                    listar(i);
                    }
                    break;
            }
    }while(menu_number != 0);
}

//Funcao e script principal do programa
int main(){
    int i = 0;
    
    arquivo.open("veiculos.txt",ios_base::in); //in = input (leitura)
    
    if(!arquivo){
        arquivo.open("veiculos.txt",ios_base::out); //out = output (escrita)
        arquivo.close();
        limpa_tela();
    }else{
        /*Laço de repeticão usando o operador de inserção '>>' que quando ' ' é encontrado 
        a inserção termina*/
        while(arquivo >> veiculos[i].codigo >> veiculos[i].marca >> veiculos[i].modelo 
        >> veiculos[i].motor >> veiculos[i].ano >> veiculos[i].quilometragem >> veiculos[i].preco_locacao 
        >> veiculos[i].categoria >> veiculos[i].status >> veiculos[i].ativo_string){
            /* veiculos[i].ativo = stoi(veiculos[i].ativo_string); */
            istringstream convert(veiculos[i].ativo_string);
			convert >> veiculos[i].ativo;
            i++;
        }
    }
    arquivo.close();

    //Inicio do programa
    menu();

    ofstream arquivo;
    arquivo.open("veiculos.txt", ios::in);
    for(i = 0; i < MAX_VEICULOS; i++){
        if(veiculos[i].ativo){
            arquivo << veiculos[i].codigo << " ";
            arquivo << veiculos[i].marca << " ";
            arquivo << veiculos[i].modelo << " ";
            arquivo << veiculos[i].motor << " ";
            arquivo << veiculos[i].ano << " ";
            arquivo << veiculos[i].quilometragem << " ";  
            arquivo << veiculos[i].preco_locacao << " ";
            arquivo << veiculos[i].categoria << " ";
            arquivo << veiculos[i].status << " ";
            arquivo << veiculos[i].ativo << " ";

            arquivo << "\n";
        }
    }
    arquivo.close();

    return 0;
}