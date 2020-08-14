// Em uma "lista" podemos realizar as seguintes operações básicas:
// - Criação da lista
// - inserção da lista
// - exclusão de um elemento
// - acesso a um elemento
// - destruição da lista
// - etc..

// Essas operações dependem do tipo de alocação de memória usada:
// - estática
// - dinâmica

// Alocação estática
// - O espaço de memória é alocada no momento da compilação
// - Exige a a definição do número máximop de elementos da "lista"
// - Acesso sequencial: elementos consecutivos na memória

// Alocação dinâmica:
// - O espaço de memória é alocado em tempo de execução
// - A "lista" cresce à medida que novos elementos são armazenados,
// e diminui à medida que elementos são removidos
// - Acesso encadeado: cada elemento pode estar em uma área distinta da memória
// para acessar um elemento, é preciso percorrer todos os seus antecessores na "lista"