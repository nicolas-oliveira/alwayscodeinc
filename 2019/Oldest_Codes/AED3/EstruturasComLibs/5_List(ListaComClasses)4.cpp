#include <iostream>
#include <list>

using namespace std;

class jogador {
  private:
    string nome, posicao;
    int numero;
  
  public:
    // Método constructor
    jogador(string _nome, string posic, int num) {
      nome = _nome;
      posicao = posic;
      numero = num;
    }

    void imprimir() {
      cout << nome << " - " << posicao << " - " << numero << endl;
    } 
    
    // Sobrescrevendo o comportamento do operador '=='
    bool operator == (const jogador& p ) const {
      return nome == p.nome && numero == p.numero && nome == p.nome;
    }
};

void imprimir(list<jogador> time) {
  cout << "-----" << endl;
  for(auto item : time) {
    item.imprimir();
  }
  // Caso não reconheça o 'auto'
  // for(list<jogador>::iterator i = time.begin(); i != time.end(); i++) {
  //   i->imprimir();
  // }
  cout << "-----" << endl;
}

void compare(jogador el1, jogador el2) {
  if(el1 == el2) {
    cout << "Iguais\n";
  } else {
    cout << "Diferentes\n";
  }
}

int main() {
  jogador j1("Nicolas", "Atacante", 9);
  jogador j2("Neymar", "Atacante", 10);
  jogador j3("Zico", "Zagueito", 5);

  jogador temp("Nicolas", "Atacante", 9);
  jogador temp1("Nicolas", "Atacante", 9);
  jogador temp2("Nicolas", "Opa", 9);
  jogador temp3("Nicolas", "Opa", 10);

  compare(j1, temp1);
  compare(j1, temp2);
  compare(j1, temp3);

  // Inicialização da lista time através da classe jogador
  list<jogador> time;

  time.push_back(j1);
  time.push_back(j2);
  time.push_front(j3);

  imprimir(time);

  time.remove(temp);

  imprimir(time);

  return 0;
}