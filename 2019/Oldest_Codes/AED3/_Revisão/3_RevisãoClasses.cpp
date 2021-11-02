// Explicação de como declarar classes em C++
#include <iostream>
#include <string>
using namespace std;

// Palavra reservada 'class'
// métodos 'public' e 'private' são usados para as permissões de acesso
class Hello {
  public:
    string s = "Hello world";
  private:
};

int main() {
  // Instanciamento da classe 'Hello' com um novo objeto 'objeto'
  Hello objeto;

  // O acesso é feito através do ponto
  cout << objeto.s << endl;
  objeto.s = "Hello Mudado";
  cout << objeto.s << endl << endl;

  // Instanciamento da classe 'Hello' com um novo objeto 'objeto2'
  // usando ponteiros e a palavra reservada 'new'
  Hello *objeto2 = new Hello();

  // O acesso é feito através da seta '->'
  cout << objeto2->s << endl;
  objeto2->s = "Hello Mudado2";
  cout << objeto2->s << endl;
  return 0;
}