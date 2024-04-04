#include <iostream>
#include <queue>

#define MAX 56;
using namespace std;

class pessoa {
	private:
		string nome, cep, cidade;
		int numero;

	public:
		pessoa() {}

		pessoa(string _nome, string _cep, int _numero, string _cidade) {
			nome = _nome;
			cep = _cep;
			numero = _numero;
			cidade = _cidade;
		}


    //sobrecarga operador ==
		bool operator == (const pessoa& p) const {
			return nome == p.nome;
		}

		void imprimir() {
			cout << nome << " - " << cep << " - " << cidade << " - " << numero << endl;
    }
};

pessoa novaPessoa() {
  string nome, cep, cidade;
  int numero;
  
  cout << "Digite o nome: ";
  cin >> nome;
  
  cout << "Digite o cep: ";
  cin >> cep;
  
  cout << "Digite o numero: ";
  cin >> numero;
  
  cout << "Digite a cidade: ";
  cin >> cidade;
  pessoa temp(nome, cep, numero, cidade);
  system("clear");

  return temp;
}

void imprimir(queue<pessoa> fila) {
  while(!fila.empty()){
    fila.front().imprimir();
    fila.pop();
  }
  cout << endl;
}

int main() {
	queue<pessoa> pac;
	queue<pessoa> sedex;
	pessoa p1("Nicolas", "239565", 89, "Passos");
	pessoa p2("Felipe", "296587", 1925, "Altaíba");
	pessoa p3("Bianca", "9956823", 78, "São Sebastião");
	pessoa p4("Mailson", "1078569", 98, "São Sebastião");
	
	pac.push(p1);
	pac.push(p2);
  sedex.push(p3);
  sedex.push(p4);

  int op;
  do {
    cout << "\n┌───────────────────────────────────────────────────────┐";
    cout << "\n│                  ┌────────────────┐                   │";
    cout << "\n│                  │ MENU DE OPÇÕES │                   │";
    cout << "\n│                  └────────────────┘                   │";
    cout << "\n│ 1 - Adicionar pessoas na fila;                        │";
    cout << "\n│ 2 - Chamar próximo da fila;                           │";
    cout << "\n│ 3 - Mostrar as filas;                                 │";
    cout << "\n│                                                       │";
    cout << "\n│ 0 - SAIR                                              │";
    cout << "\n└───────────────────────────────────────────────────────┘";
    cout << "\n Digite sua opção:  ";
    cin  >> op;

    system("clear");
    // Verificação de opções inválidas
    if (op > 3 || op < 0) cout << "Opção Inválida";
    
    // Adicionar pessoas na fila
    if (op == 1) {
      int op2;
      do {
        cout << "\n┌───────────────────────────────────────────────────────┐";
        cout << "\n│                  ┌────────────────┐                   │";
        cout << "\n│                  │ MENU DE OPÇÕES │                   │";
        cout << "\n│                  └────────────────┘                   │";
        cout << "\n│ Escolha a fila desejada:                              │";
        cout << "\n│ 1 - PAC;                                              │";
        cout << "\n│ 2 - SEDEX;                                            │";
        cout << "\n│                                                       │";
        cout << "\n│ 0 - VOLTAR                                            │";
        cout << "\n└───────────────────────────────────────────────────────┘";
        cout << "\n Digite sua opção:  ";
        cin  >> op2;
        system("clear");
        
        if (op2 > 2 || op2 < 0) cout << "Opção Inválida";

        if(op2 == 1) {
          pac.push(novaPessoa());
        }

        if(op2 == 2) {
          sedex.push(novaPessoa());
        }
      } while(op2 != 0);
    }

    // Chamar próximo da fila;  
    if (op == 2) {
      int op2;
      do {
        cout << "\n┌───────────────────────────────────────────────────────┐";
        cout << "\n│                  ┌────────────────┐                   │";
        cout << "\n│                  │ MENU DE OPÇÕES │                   │";
        cout << "\n│                  └────────────────┘                   │";
        cout << "\n│ Escolha a fila desejada:                              │";
        cout << "\n│ 1 - PAC;                                              │";
        cout << "\n│ 2 - SEDEX;                                            │";
        cout << "\n│                                                       │";
        cout << "\n│ 0 - VOLTAR                                            │";
        cout << "\n└───────────────────────────────────────────────────────┘";
        cout << "\n Digite sua opção:  ";
        cin  >> op2;
        system("clear");
              
        if (op2 > 2 || op2 < 0) cout << "Opção Inválida";

        if(op2 == 1) {
          pac.pop();
          cout << "Próximo da fila PAC: ";
          pac.front().imprimir();
          system("read");
        }

        if(op2 == 2) {
          sedex.pop();
          cout << "Próximo da fila SEDEX: ";
          sedex.front().imprimir();
          system("read");
        }
      } while(op2 != 0);
    }
      

    // Mostrar as filas; 
    if (op == 3) {
      cout << "PAC: \n";
      imprimir(pac);
      cout << "SEDEX: \n";
      imprimir(sedex);

      system("read");
      system("clear");
    }

  } while (op != 0);
}