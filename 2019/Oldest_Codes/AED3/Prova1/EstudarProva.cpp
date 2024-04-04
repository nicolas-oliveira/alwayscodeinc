#include <iostream>
#include <list>

using namespace std;

class Jogador {
  private:
    string nome, posicao;
    int numero;
  public:
  Jogador() {}

  Jogador(string _nome, string _posicao, int _numero) {
    nome = _nome;
    posicao = _posicao;
    numero = _numero;
  }

  void setNome(string _nome) { nome = _nome; }
  void setPosicao(string _posicao) { nome = _posicao; }
  void setNumero(int _numero) { nome = _numero; }

  void imprimirJogador() {
    cout << nome << " - " << posicao << " - " << numero << endl; 
  }
};

class Time {
  private:
    string nome;
    list<Jogador> jogadores;

  public:
    Time() {
      nome = "";
    }

    Time(string _nome) {
      nome = _nome; 
    }

    void inserirJogador(string nomeJogador, string posicaoJogador, int numero) {
      Jogador novoJogador(nomeJogador, posicaoJogador, numero);
      jogadores.push_back(novoJogador);
    }

    bool operator == (const Time& p) const {
      return nome == p.nome;
    }
    
    void imprimirEquipe() {
      cout << "Equipe: " << nome << endl;
      for(auto item : jogadores) {
        item.imprimirJogador();
      }
    }
};

class Campeonato {
  private:
    string nome;
    list<Time> times;
  public:
    Campeonato() {

    }
    Campeonato(string _nome) {
      nome = _nome;
    }
};
int main() {
  Time t1("Barcelona");
  Time t2("Real Madrid");
  t2.inserirJogador("Jailson", "Atacante", 10);
  t2.inserirJogador("Ney", "Atacante", 10);
  t2.imprimirEquipe();
  return 0;
}