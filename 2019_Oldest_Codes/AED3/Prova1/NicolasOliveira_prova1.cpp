#include <iostream>
#include <list>

using namespace std;

class Aluno {
  private:
    string nome;
    float nota;
  public:
    Aluno() {}
    Aluno(string _nome, float _nota) {
      nome = _nome;
      nota = _nota;
    }

    bool operator == (const Aluno& p) const {
			return nome == p.nome;
		}

    void setNota(float _nota) { nota = _nota; }
    void setNome(string _nome) { nome = _nome; }
    float getNota() { return nota; }
    string getNome() { return nome; }

    void imprimir() {
      cout << nome << " - " << nota << endl;
    }
};

void remover(list<Aluno> &alunos) {
  string nomeTemp;
  int notaTemp; 
  Aluno alunoTemp;

  cout << "Digite o nome do Aluno para ser removido: ";
  cin >> nomeTemp;

  bool encontrado = false;
  
  for(auto aluno : alunos) {
    string alunoNome = aluno.getNome();
    if(nomeTemp == aluno.getNome()) {
      encontrado = true;
      // Para evitar erro de segmentação
      alunoTemp = aluno;
    }
  }
  
  if(encontrado) {
    system("clear");
    cout << "Aluno removido com sucesso!\n";
    alunos.remove(alunoTemp);
  } else {
    system("clear");
    cout << "Aluno não encontrado\n";
  }
}

void atualizar(list<Aluno> &alunos){
  string nomeTemp;
  int notaTemp;

  cout << "Digite o nome do Aluno: ";
  cin >> nomeTemp;

  bool encontrado = false;

  for(auto aluno : alunos) {
    string alunoNome = aluno.getNome();

    if(nomeTemp == aluno.getNome()) {
      encontrado = true;
      int op;
      do {
        system("clear");
        cout << "Alterar " << aluno.getNome() << endl;
        cout << "1 - Mudar o Nome\n";
        cout << "2 - Mudar a Nota\n";
        cin >> op;
        system("clear");
        if(op == 1) {
          cout << "Digite outro nome: ";
          cin >> nomeTemp;
          // Devido a sobrecarga do operador '==' não é possivel alterar o Nome
          aluno.setNome(nomeTemp);
          system("clear");
          cout << "Informações alteradas!\n";
          break;
        }
        if(op == 2) {
          cout << "Digite outra nota: ";
          cin >> notaTemp;

          aluno.setNota(notaTemp);
          system("clear");
          cout << "Informações alteradas!\n";
          break;
        }
      } while(op != 1 || op != 2);
    }
  }
  if(!encontrado) {
    system("clear");
    cout << "Aluno não encontrado\n";
  }
}

void imprimir(list<Aluno> &alunos) {
  int i = 0;
  for(auto aluno : alunos) {
    float nota = aluno.getNota();
    string nome = aluno.getNome();
    if(i == 0) {
      nota *= 1.1;
    } else if(i == 1) {
      nota *= 1.075;
    } else if(i == 2) {
      nota *= 1.05;
    }

    aluno.setNota(nota);
    aluno.setNome(nome);

    aluno.imprimir();
    i++;
  }
}

int main() {
  int op;
  list<Aluno> alunos;

  Aluno a1("Nicolas", 30);
  alunos.push_front(a1);

  do {
    cout << "1 - Inserir Aluno\n";
    cout << "2 - Atualizar Aluno\n";
    cout << "3 - Remover Aluno\n";
    cout << "4 - Imprimir todas as notas\n\n";
    cout << "0 - Sair\n\n";
    cin >> op;
    system("clear");
    if(op == 1) {
      string nomeTemp;
      float notaTemp;

      cout << "Digite o nome do Aluno: ";
      cin >> nomeTemp;
      cout << "Digite a nota do Aluno: ";
      cin >> notaTemp;

      Aluno temp(nomeTemp, notaTemp);
      alunos.push_back(temp);

      system("clear");
    } else if(op == 2) {
      
      atualizar(alunos);

    } else if(op == 3) {
      
      remover(alunos);
    
    } else if(op == 4) {

      imprimir(alunos);
    
      cout << "\nDigite qualquer tecla para continuar..\n";
      system("read");
      system("clear");
    
    } else if(op == 0) {} else {
      cout << "Opção inválida!" << endl;
    }
  } while(op != 0);
  return 0;
}