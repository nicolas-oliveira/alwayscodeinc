#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <locale.h>
#ifdef __unix__
    #include <unistd.h>
    #include <stdlib.h>
#elif defined(_WIN32) || defined(WIN32)
   #define OS_Windows
   #include <windows.h>
#endif
using namespace std;

#define MAXIMO_DE_VEICULOS 50
typedef struct{
	string  marca, modelo, motor, categoria, preco , status, ano, codigo, kms, ativo_str;
	int ativo;
} TCarros;

TCarros carros[MAXIMO_DE_VEICULOS];

void mostrar_veiculos(){
	for(int i =0; i < MAXIMO_DE_VEICULOS; i++){
        if(carros[i].ativo == 1){
        cout << "--------------------"<< endl;
            cout << i+1 << ")"	<< endl;
            cout << carros[i].codigo << endl;
            cout << carros[i].marca << endl;
            cout << carros[i].modelo << endl;
            cout << carros[i].motor << endl;
            cout << carros[i].ano << endl;
            cout << carros[i].kms << endl;
            cout << carros[i].categoria << endl;
            cout << carros[i].preco << endl;
            cout << carros[i].status << endl;
        }
	}
	cout << "--------------------" << endl;
}
int main(){

	setlocale(LC_ALL, "Portuguese");

	int numero_menu, i;
	fstream arquivo;

	arquivo.open("carros.txt", ios_base::in);


	if(!arquivo){
		arquivo.open("carros.txt", ios_base::out);
		arquivo.close();
	}else{
		while(arquivo >> carros[i].codigo >> carros[i].marca  >> carros[i].modelo >> carros[i].motor >> carros[i].ano >> carros[i].kms >> carros[i].categoria >> carros[i].preco >> carros[i].status >> carros[i].ativo_str){
			istringstream convert(carros[i].ativo_str);
			convert >> carros[i].ativo;
			i++;
		}
		arquivo.close();
	}

	do{
        cout << "1 - Cadastrar" << endl;
        cout << "2 - Listar cadastros existentes" << endl;
        cout << "3 - Editar" << endl;
        cout << "4 - Consultar" << endl;
        cout << "0 - Sair" << endl;
        cin >> numero_menu;
        system("cls");

        switch(numero_menu)
        {
            case 1:

                do{
                        if(carros[i].ativo == 1){
                            do{
                                i++;
                            }while(carros[i].ativo == 1);
                        }
                    cout <<"Código do veículo " << endl ;
                    cin >> carros[i].codigo;
                    cout << "Marca do veículo  " << endl  ;
                    cin >> carros[i].marca;
                    cout << "Modelo do veículo  " << endl ;
                    cin >> carros[i].modelo;
                    cout << "Tipo de Motor " << endl;
                    cin >> carros[i].motor;
                    cout << "Ano de fabricação " << endl ;
                    cin >> carros[i].ano ;
                    cout << "Quilometragem total percorrida " << endl ;
                    cin >> carros[i].kms ;
                    cout << "Categoria: economico, intermediario ou luxo. " << endl ;
                    cin >> carros[i].categoria ;
                    cout << "Preço de locação " << endl ;
                    cin >> carros[i].preco ;
                    cout << "Status: disponivel, locado ou  manutençao. " << endl ;
                    cin >> carros[i].status ;
                    carros[i].ativo = 1;

                    cout << "1 - Continuar" << endl;
                    cout << "2 - Voltar para o menu" << endl;
                    cout << "0 - Sair" << endl;
                    cin >> numero_menu;
                    system("cls");
                    if(numero_menu == 1){
                        i++;
                    }
                }while(numero_menu == 1);
            break;

            case 2:
                mostrar_veiculos();
                break;

            case 3:

                int j;
                int contador;

                mostrar_veiculos();
                cout << "Escolha um veiculo: ";
                cin >> j;

                cout <<"Código do veículo " << endl ;
                cin >> carros[j].codigo;
                    cout << "Marca do veículo  " << endl  ;
                    cin >> carros[j].marca;
                    cout << "Modelo do veículo  " << endl ;
                    cin >> carros[j].modelo;
                    cout << "Tipo de Motor " << endl;
                    cin >> carros[j].motor;
                    cout << "Ano de fabricação " << endl ;
                    cin >> carros[j].ano ;
                    cout << "Quilometragem total percorrida " << endl ;
                    cin >> carros[j].kms ;
                    cout << "Categoria: economico, intermediario ou luxo. " << endl ;
                    cin >> carros[j].categoria ;
                    cout << "Preço de locação " << endl ;
                    cin >> carros[j].preco ;
                    cout << "Status: disponivel, locado ou  manutençao. " << endl ;
                    cin >> carros[j].status ;
                    carros[j].ativo = 1;

            break;
            case 4:
            	string pesquisar;
                system("cls");
                cout << "Pesquisar: ";
                cin >> pesquisar;
                for(i = 0; i < MAXIMO_DE_VEICULOS; i++){
                    if(pesquisar == carros[i].codigo || pesquisar  == carros[i].marca || pesquisar == carros[i].modelo || pesquisar == carros[i].motor || pesquisar == carros[i].preco || pesquisar == carros[i].status || pesquisar == carros[i].kms || pesquisar == carros[i].categoria || pesquisar == carros[i].ano){
                        cout << "--------------------"<< endl;
                        cout << i+1 << ")"	<< endl;
                        cout << carros[i].codigo << endl;
                        cout << carros[i].marca << endl;
                        cout << carros[i].modelo << endl;
                        cout << carros[i].motor << endl;
                        cout << carros[i].ano << endl;
                        cout << carros[i].kms << endl;
                        cout << carros[i].categoria << endl;
                        cout << carros[i].preco << endl;
                        cout << carros[i].status << endl;
                    }
                }

            break;
        }
   	}while(numero_menu != 0);

    for(i=0; i < MAXIMO_DE_VEICULOS; i++){
        ofstream arquivo;
        arquivo.open("carros.txt", ios::in|ios::app);

        arquivo << carros[i].codigo << " ";
        arquivo << carros[i].marca << " ";
        arquivo << carros[i].modelo << " ";
        arquivo << carros[i].motor << " ";
        arquivo << carros[i].ano << " ";
        arquivo << carros[i].kms << " ";
        arquivo << carros[i].categoria << " ";
        arquivo << carros[i].preco << " ";
        arquivo << carros[i].status << " ";
        arquivo << carros[i].ativo << " ";
        arquivo << "\n";

        arquivo.close();
    }
return 0;

}
