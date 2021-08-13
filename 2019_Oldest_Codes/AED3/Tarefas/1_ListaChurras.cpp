#include <iostream>

using namespace std;

class celula {
  private:
    string nome;
    int idade;
    bool bebe;
    string sexo;
    celula * proxima;
  public:
    celula() {
      proxima = NULL;
    }

    celula(string n) {
      nome = n;
    }

    celula(string n, celula *p) {
      nome = n;
      proxima = p;
    }

    celula(string _nome, int _idade, string _sexo, bool _bebe, celula *p) {
      nome = _nome;
      idade = _idade;
      bebe = _bebe;
      sexo = _sexo;
      proxima = p;
    }

    string getNome() {
      return nome;
    }
    void setNome(string n) {
      nome = n;
    }

    celula * getProxima() {
      return proxima;
    }

    void setProxima(celula * l) {
      proxima = l;
    }
    
    int getIdade() {
      return idade;
    }
    
    void setIdade(int _idade){
      idade = _idade;
    }

    string getBebe() {
      if(bebe) {
        return "Bebe";
      } else {
        return "Não bebe";  
      }
 

    }
    
    void setBebe(bool _bebe){
      bebe = _bebe;
    }

    string getSexo() {    
      return sexo;
    }
    
    void setSexo(string _sexo){
      sexo = _sexo;
    }
};


class lista {
  private:
    celula * inicio;

  public:
    lista() {
      inicio = NULL;
    }
    ~lista() {
      esvaziar();
    }
    lista(celula *i) {
      inicio = i;
    }
    celula * getInicio() {
      return inicio;
    }

     void inserirInicio(string _nome, int _idade, string _sexo, bool _bebe) {
      celula *nova = new celula;
      nova->setProxima(inicio);
      nova->setNome(_nome);
      nova->setIdade( _idade);
      nova->setSexo(_sexo);
      nova->setBebe(_bebe);
      inicio = nova;
    }

    void inserirFim(string _nome, int _idade, string _sexo, bool _bebe) {
      if(inicio == NULL) {
        inserirInicio(_nome, _idade, _sexo, _bebe);
      } else {
        celula *aux = inicio;
        while(aux->getProxima() != NULL) {
          aux = aux->getProxima();
        }
        celula *nova = new celula(_nome, _idade, _sexo, _bebe, NULL);
        aux->setProxima(nova); 
      }
    }

    void imprimir() {
      if(inicio == NULL) {
        cout << "Lista vazia.\n";
      } else {
        celula *aux = inicio;
        while(aux != NULL) {
          cout << aux->getNome() << " " << aux->getIdade() << " " << aux->getSexo() << " " << aux->getBebe() << endl;
          aux = aux->getProxima();
        }
      }
    }
	
    void esvaziar() {
      celula *aux = inicio;
      while(aux != NULL){
        inicio = inicio->getProxima();
        delete aux;
        aux = inicio;
      }
      cout << "\n----Memoria liberada----\n";
    }
};

int main() {
	lista listaChurras;

	listaChurras.inserirFim("Felipe", 19, "Masculino", true);
	listaChurras.inserirFim("Ricardo", 22, "Masculino", true);
	listaChurras.inserirFim("Júlia", 23, "Feminino", false);
	listaChurras.imprimir();
	return 0;
}