#define MAX 50

// Estrututra da lista
typedef struct {
  // Números inteiros da lista
  int A[MAX];
  // Contagem dos elementos
  int numeroElementos;
} Lista;

int buscaBinaria(Lista* l, int number) {
  int low, middle, high;
  low = 0;
  high = l->numeroElementos-1;
  while(low <= high) {
    middle = (low + high) / 2;
    
    if(l->A[middle] == number) {
      return middle;
    } else {
      if(l->A[middle] < number) 
        low = middle + 1;
      else 
        high = middle - 1;
    }
  }
}