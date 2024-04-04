// Um simples programa em C++ para introduzir
// Lista encadeadas
#include <bits/stdc++.h> 
using namespace std; 
  
class Node { 
public: 
    int data; 
    Node* next; 
}; 
  

// Programa para criar uma lista encadeada simples
// lista com três nós
int main() { 
    Node* head = NULL; 
    Node* second = NULL; 
    Node* third = NULL; 
  
    // Alocar 3 nós na pilha
    head = new Node(); 
    second = new Node(); 
    third = new Node(); 

    /* Três blocos estão sendo alocados dinamicamente.  
    Nós temos ponteiros para cada um desses três blocos:
    Cabeça, segundo terceiro      
    cabeça         segundo         terceiro  
        |             |             |  
        |             |             |  
    +---+-----+     +----+----+     +----+----+  
    | # | #   |     | # | #   |     | # | #   |  
    +---+-----+     +----+----+     +----+----+  
      
    '#' Representa um valor randômico
    Os dados são randômicos também porque ainda não definimos 
    o que irá receber */
  
    head->data = 1; // atribuir dados no primeiro nó  
    head->next = second; // Ligar o primeiro nó com 
    // o segundo nó
  
    /* data has been assigned to the data part of first  
    block (block pointed by the head). And next  
    pointer of the first block points to second.  
    So they both are linked.  
    
  
    head         second         third  
        |             |             |  
        |             |             |  
    +---+---+     +----+----+     +-----+----+  
    | 1 | o-----> | # | #   |     | # | #    |  
    +---+---+     +----+----+     +-----+----+      
*/
  
    // assign data to second node 
    second->data = 2; 
  
    // Link second node with the third node 
    second->next = third; 
  
    /* Os dados foram designados para a primeira parte do segundo bloco 
    (dados do segundo bloco). E o próximo ponteiro do segundo bloco
    aponta para o terceiro bloco. Então os três blocos estão encadeados
    cabeça        segundo      terceiro  
        |             |             |  
        |             |             |  
    +---+---+     +---+---+     +----+----+  
    | 1 | o-----> | 2 | o-----> | # | #   |  
    +---+---+     +---+---+     +----+----+     */
  
    third->data = 3; // aponta para os dados do segundo nó 
    third->next = NULL; 
  
   
    /* Os dados foram designados para a primeira parte do terceiro bloco 
    (dados do terceiro bloco). E o próximo ponteiro do terceiro bloco é dado
    como NULL para indicar que a lista termina ali.
    A lista encadeada está pronta.
  
        cabeça      
            |  
            |  
        +---+---+     +---+---+     +----+------+  
        | 1 | o-----> | 2 | o-----> | 3 | NULL  |  
        +---+---+     +---+---+     +----+------+      
      
    Perceba que apenas a cabeça e suficiente para
    representar toda a lista. Podemos  
    the whole list. Podemos percorrer toda a lista 
    apenas seguindo os próximos ponteiros. */
    Node *aux;
    while (aux != NULL) {
      cout << aux->data << " ";
      aux = aux->next;
    }
    return 0; 
} 
  
// This code is contributed by rathbhupendra 