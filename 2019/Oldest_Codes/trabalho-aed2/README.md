# Trabalho AED II
***Trabalho feito para a diciplina de Algoritmos e Estruturas de Dados 2 na Universidade Estadual do Estado de Minas Gerais (UEMG) por Nicolas Oliveira e Mateus Riquelme***

## Descrição do trabalho:

Crie um programa (com documentação interna e externa) que seja capaz de gerenciar
produtos e locações de uma locadora de veículos (com até 50 veículos), dando ao seu
proprietário opções de operação do programa onde ele possa:
1. Cadastrar veículo;
    - Código
    - Marca
    - Modelo
    - Motor
    - Ano
    - Quilometragem
    - Categoria (econômico,intermediário,luxo)
    - Preço de locação
    - Status (disponível, locado, manutenção);
    - Editar cadastro;

2. Editar Veículo;
    - Pedir o item a ser editado e editar apenas o item escolhido;
3. Registrar locação;
    - Controlar em um vetor de locações com nome do locatário e código do veículo;
    - Alterar o status no cadastro do veículo;
4. Registrar devolução – com as operações equivalentes em relação à locação;

5. Consultar veículos;
    - Todos;
    - Por marca;
    - Por motor;
    - Por categoria;
    - Por status;
    - Marca
6. Consultar locações em andamento;

7. Sair do programa.

Ao iniciar o programa, os dados devem ser lidos de um arquivo e carregados na memória, para serem trabalhados. Ao encerrar o programa (quando então o usuário escolher a opção de saída) os dados devem ser gravados em arquivo para possibilitar sua recuperação posterior.

### Observações:

*OBS1: Na primeira vez em que o programa for rodado não existirá ainda o arquivo.Por isso, ao abrir o arquivo para leitura, deve-se verificar se ele existe ou não. Se existir, a leitura segue normalmente e então passa-se para o restante do programa. Se o arquivo ainda não existir (primeira execução do programa), a leitura não é realizada, e o programa continua normalmente. Ao final da execução o arquivo será então gravado pela primeira vez, e passará a existir para as próximas leituras.*

*OBS2: O arquivo será aberto para leitura e lido somente no início do programa, sendo então fechado antes de continuar a execução, e será aberto e escrito somente ao final da execução, e depois fechado. Todas as consultas, os cadastros, as alterações e demais manipulações nos dados devem ser feitos diretamente na memória.*

