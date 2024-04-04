#include "menu.h"
#include "funcoes.h"

using namespace std;

struct Login
{
    string usuario;
    string senha;
};

void opcao();
int verificacao(Login login);
Login entrada();
string retorna_nome();
void inicio();
string asterisco(string frase, int i = 0);


string nome;
string administrador_nome, administrador_senha, administrador_usuario;
int administrador_permissao;

int main()
{
    inicio();
    return 0;
}

string asterisco(string frase, int i)
{
    if (i == 0)
    {
        for (int x = 0; frase[x] != '\0'; x++)
        {
            if (frase[x] == ' ')
            {
                frase[x] = '*';
            }
        }
    } else if (i == 1)
    {
        for (int x = 0; frase[x] != '\0'; x++)
        {
            if (frase[x] == '*')
            {
                frase[x] = ' ';
            }
        }
    }
    return frase;
}

void inicio()
{
    system("cls");
    opcao();
    bool deseja_sair = false;
    cout << "Deseja finalizar a execução? 1=sim/0=nao" << endl;
    cin >> deseja_sair;
    if (deseja_sair == true)
    {
        return;
    }
    inicio();
}

Login entrada_dados()
{
    Login login;
    cout << "Digite o login: ";
    fflush(stdin);
    getline(cin, login.usuario);
    cout << "Digite a senha: ";
    cin >> login.senha;
    return login;
}

int verificacao(Login login)
{
    int opcao = 0;
    fstream buscar("cadastro.txt", ios::in);
    if (buscar)
    {
        while (buscar >>
                administrador_nome >>
                administrador_usuario >>
                administrador_senha >>
                administrador_permissao)
        {
            if (asterisco(login.usuario) == administrador_usuario && login.senha == administrador_senha)
            {
                nome = administrador_usuario;
                buscar.close();
                return administrador_permissao;
            }
        }
    } else cout << "Erro ao verificar autentificação." << endl;
    buscar.close();
    cout << "Login ou senha errados." << endl;
    system("pause");
    inicio();
}

void opcao()
{
    menu menu;
    int opcao = verificacao(entrada_dados());
    if (opcao == 1)
    {
        menu.aluno_menu(nome);
    }
    if (opcao == 2)
    {
        menu.funcionarios_menu();
    }
    if (opcao == 3)
    {
        menu.administrador_menu();
    }
}


