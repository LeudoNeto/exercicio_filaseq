# Projeto de Fila Sequencial em C++

Este repositório contém um exemplo de implementação de uma fila sequencial (ou fila circular) em C++ usando um array para armazenar os elementos. O projeto é voltado para um Exercício da cadeira Estrutura de Dados, prof. Gilberto.

## Estrutura do Projeto

- `main.cpp`: Contém a implementação da fila sequencial e o código principal para testar suas funcionalidades.
- `Makefile`: Facilita a compilação do código.

## Descrição das Classes

### Classe `Node`

A classe `Node` é uma estrutura simples que representa um nó em uma lista encadeada. Embora esta classe esteja definida no código, ela não é utilizada na implementação da fila sequencial atual.

#### Atributos
- `int val`: Valor armazenado no nó.
- `Node *next`: Ponteiro para o próximo nó na lista.

#### Métodos
- Construtor padrão: Inicializa o valor do nó para 0 e o ponteiro `next` para `nullptr`.

### Classe `FilaSeq`

A classe `FilaSeq` implementa uma fila sequencial utilizando um array circular.

#### Atributos
- `int inicio`: Índice do início da fila.
- `int fim`: Índice do fim da fila.
- `int tamanho`: Número de elementos na fila.
- `int tamMax`: Tamanho máximo da fila.
- `int *dados`: Array que armazena os elementos da fila.

#### Métodos
- `void inserir(int valor)`: Insere um valor no final da fila.
- `void remover()`: Remove o valor do início da fila.
- `int consultarInicio() const`: Retorna o valor no início da fila.
- `bool estaVazia() const`: Verifica se a fila está vazia.
- `bool estaCheia() const`: Verifica se a fila está cheia.

## Instruções de Compilação

Para compilar o projeto, use o Makefile fornecido. Execute o seguinte comando no terminal:

```sh
make
```

Isso criará um executável chamado `main.exe`.

## Instruções de Uso

Depois de compilar o código, execute o programa com o seguinte comando:

```sh
./main.exe
```

O programa executará uma série de operações na fila sequencial e exibirá o resultado no terminal. As operações incluem inserção de elementos, remoção e verificação do estado da fila.

## Exemplo de Saída

O programa gerará uma saída semelhante a:

```
Teste 1: Inserir e consultar elementos
Início da fila após inserções: 10
A fila está cheia? Sim
Início da fila após remover um elemento: 20
Início da fila após inserir 60: 20
A fila está vazia? Não
A fila está cheia? Não
Início da fila após inserções finais: 60
A fila está cheia? Sim
A fila está vazia? Sim
```

## Limpeza

Para remover os arquivos binários gerados, execute o comando:

```sh
make clean
```
