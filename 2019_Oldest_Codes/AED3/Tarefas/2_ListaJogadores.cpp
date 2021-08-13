#include <iostream>
#include <list>

#define MAX 56;
using namespace std;

class jogador {
	private:
		string nome, posicao;
		int numero;

	public:
		jogador() {}

		jogador(string _nome, string _posicao, int _numero) {
			nome = _nome;
			posicao = _posicao;
			numero = _numero;
		}

    string getNome() {
      return nome;
    }
		
    //sobrecarga operador ==
		bool operator == (const jogador& p) const {
			return nome == p.nome;
		}

		void imprimir() {
      string numeroS = to_string(numero);
      int limite = 56 - (nome.length() + posicao.length() + numeroS.length() + 8);
			cout << "\n│ " << nome << " - " << posicao << " - " << numero;
      for(int i = 0; i <= limite; i++) {
        if(i != limite) cout << " ";
        if(i == limite) cout << "│";
      }
		}
};

class equipe {
	private:
		string nome;
		string nacionalidade;
		int ano;

	public:
    list<jogador> jogadores;
		equipe() { nome = ""; nacionalidade = ""; ano = 0; }

		equipe(string _nome, string _nacionalidade, int _ano) {
			nome = _nome;
			nacionalidade = _nacionalidade;
			ano = _ano;
		}

    string getNome() {
      return nome;
    }

    list<jogador> getJogadores() {
      return jogadores;
    }
		//sobrecarga operador ==
		bool operator == (const equipe& p) const {
			return nome == p.nome;
		}

		void insereJogador() {
      string nomeJogador, posicaoJogador;
			int numeroJogador;

			cout << "Adicionar jogador no " << nome << endl;
			
      cout << "Digite o nome do jogador: ";
			cin >> nomeJogador;

			cout << "Digite a posição do jogador: ";
			cin >> posicaoJogador;
			
      cout << "Digite o número do jogador: ";
			cin >> numeroJogador;
			
      jogador temp(nomeJogador, posicaoJogador, numeroJogador);
			
      jogadores.push_back(temp);

      system("clear");
      cout << "Jogador inserido com sucesso";
		}

    void imprimirEquipe() {
      int limite = MAX;
      cout << "\n┌───────────────────────────────────────────────────────┐";
      // Loop para efetuar o encaixe visual das variáveis dentro da caixa
      for (int i = 0; i <= limite; i++) {
        if(i == 10) cout << "\n│ Equipe: " << nome;
        if(i > 10 && i != limite) cout << " ";
        if(i == limite - nome.length()) cout << "│";
      }
      // Nova linha
      for(int i = 0; i <= limite; i++) {
        if(i == 22) cout << "\n│ Jogadores da equipe:";
        if(i != 22 && i != limite) cout << " ";
        if(i==limite) cout << " │";
      }

			for(auto jogador : jogadores) {
				jogador.imprimir();
			}
      cout << "\n└───────────────────────────────────────────────────────┘";
		}

		void removeJogador(string nomeJogador) {
			// string n;
			// cout << "Digite o nome do jogador a ser removido:";
			// cin >> n;
			jogador temp(nomeJogador, "", 0); // Não está removendo
			jogadores.remove(temp);
		}
};

void removerJogador(list<equipe> &torneio) {
  string nome;
  bool encontrado = false;

  cout << "Digite o nome do time no qual o Jogador pertence: ";
  cin >> nome;

  // Efetua a busca pela equipe
  for(auto equipe : torneio) {
    if(equipe.getNome() == nome) {
      encontrado = true;
      string nomeJogador;

      cout << "Digite o nome do jogador a ser removido: ";
      cin >> nomeJogador;

      list<jogador> *jogadores = &equipe.jogadores;
      bool encontradoJ = false;

      for(auto jogador : *jogadores) {
        if(jogador.getNome() == nomeJogador) {
          equipe.removeJogador(nomeJogador);
          encontradoJ = true;
          cout << "Jogador removido com sucesso!";
          break;
        }
      }
      if(!encontradoJ) {
        system("clear");  
        cout << "Jogador não encontrado!";
      }
      // break responsável pelo término do loop.
      break;
    }
  }
  if(!encontrado) {
    system("clear");  
    cout << "Time não encontrado!";
  }
}

void cadastroJogador(list<equipe> &torneio) {
  string nome; 
  bool encontrado = false;

	cout << "Em qual time deseja adicionar um jogador? ";
	cin >> nome;

  for(auto equipe : torneio) {
    if(equipe.getNome() == nome) {
      encontrado = true;
      // break responsável pelo término do loop.
      break;
    }
  }

  if(!encontrado) {
    system("clear");
    cout << "Time não encontrado!";
    return;
  } else {
    equipe temp(nome, "", 0);
    
    for(auto &jogador : torneio) {
      if(jogador == temp) {
        jogador.insereJogador();
      }
    }
  }
}

int main() {
	list<equipe> torneio;
	equipe e1("Palmeiras", "Brasil", 1920);
	equipe e2("Flamengo", "Brasil", 1925);
	equipe e3("Cruzeiro", "Brasil", 1922);
	
	torneio.push_front(e1);
	torneio.push_back(e2);
  torneio.push_back(e3);
  // cadastroJogador(torneio);

  int op;
  do {
    cout << "\n┌───────────────────────────────────────────────────────┐";
    cout << "\n│                  ┌────────────────┐                   │";
    cout << "\n│                  │ MENU DE OPÇÕES │                   │";
    cout << "\n│                  └────────────────┘                   │";
    cout << "\n│ 1 - Adicionar time no torneiro;                       │";
    cout << "\n│ 2 - Remover time do torneio;                          │";
    cout << "\n│ 3 - Adicionar jogador ao time;                        │";
    cout << "\n│ 4 - Remover jogador do time;                          │";
    cout << "\n│ 5 - Imprimir os times com seus respectivos jogadores; │";
    cout << "\n│ 6 - SAIR                                              │";
    cout << "\n└───────────────────────────────────────────────────────┘";
    cout << "\n Digite sua opção:  ";
    cin  >> op;

    system("clear");
    // Verificação de opções inválidas
    if (op < 1 || op > 6) cout << "Opção Inválida";
    
    // Cadastro de novos times
    if (op == 1) {
      string nome, pais;
      int ano;
      cout << "Digite o nome do time: ";
      cin >> nome;
      cout << "Digite a nacionalidade: ";
      cin >> pais;
      cout << "Digite o ano: ";
      cin >> ano;
      equipe e(nome, pais, ano);
      torneio.push_front(e);
      cout << "Time criado com sucesso!";
    }

    // Remoção de times
    if (op == 2) {
      string nome;
      bool encontrado = false;

      cout << "Digite o nome do time a ser removido: ";
      cin >> nome;
      // Efetua a busca pela equipe
      for(auto equipe : torneio) {
        if(equipe.getNome() == nome) {
          torneio.remove(equipe);
          cout << "Time removido com sucesso!";
          encontrado = true;
          // break responsável pelo término do loop.
          break;
        }
      }
      if(!encontrado) {
        system("clear");
        cout << "Time não encontrado!";
      }
    }

    // Adicionar jogadores no time
    if (op == 3) {
      cadastroJogador(torneio);
    }

    // Remover jogadores no time
    if (op == 4) {
      removerJogador(torneio);
    }

    // Impressão dos times
    if (op == 5) {
      for(auto item : torneio) {	
        item.imprimirEquipe();
      }
      cout << "\nDigite qualquer tecla para continuar...\n";
      system("read");
      system("clear");
    }
  } while (op != 6);
}