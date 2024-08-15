#include <iostream>

using namespace std;

class Node {
    public:
        int val;
        Node *next;

    Node() {
        val = 0;
        next = nullptr;
    }
};

class FilaSeq {
    public:
        int inicio, fim, tamanho, tamMax;
        int *dados;

        FilaSeq(int tamMax) : inicio(0), fim(-1), tamanho(0), tamMax(tamMax) {
            dados = new int[tamMax];
        }

        // Inserir no fim da fila
        void inserir(int valor) {
            if (estaCheia()) {
                cerr << "A fila está cheia" << endl;
                return;
            }
            fim = (fim + 1) % tamMax;
            dados[fim] = valor;
            tamanho++;
        }

        // Remover do início da fila
        void remover() {
            if (estaVazia()) {
                cerr << "A fila está vazia" << endl;
                return;
            }
            inicio = (inicio + 1) % tamMax;
            tamanho--;
        }

        // Consultar o início da fila
        int consultarInicio() const {
            if (estaVazia()) {
                cerr << "A fila está vazia" << endl;
            }
            return dados[inicio];
        }

        // Indicar se a fila está vazia
        bool estaVazia() const {
            return tamanho == 0;
        }

        // Indicar se a fila está cheia
        bool estaCheia() const {
            return tamanho == tamMax;
        }
};

int main() {
    FilaSeq fila(5);

    // Teste 1: Inserir e consultar elementos
    cout << "Teste 1: Inserir e consultar elementos\n";
    fila.inserir(10);
    fila.inserir(20);
    fila.inserir(30);
    fila.inserir(40);
    fila.inserir(50);

    cout << "Início da fila após inserções: " << fila.consultarInicio() << endl;

    // Verificar se a fila está cheia
    cout << "A fila está cheia? " << (fila.estaCheia() ? "Sim" : "Não") << endl;

    // Remover um elemento e verificar
    fila.remover();
    cout << "Início da fila após remover um elemento: " << fila.consultarInicio() << endl;

    fila.inserir(60);
    cout << "Início da fila após inserir 60: " << fila.consultarInicio() << endl;

    // Remover todos os elementos
    fila.remover(); // remove 20
    fila.remover(); // remove 30
    fila.remover(); // remove 40
    fila.remover(); // remove 50

    cout << "A fila está vazia? " << (fila.estaVazia() ? "Sim" : "Não") << endl;

    // Teste para fila vazia
    fila.consultarInicio(); // Deve apontar erro

    // Teste para fila cheia novamente
    fila.inserir(70);
    fila.inserir(80);
    fila.inserir(90);
    fila.inserir(100);

    cout << "Início da fila após inserções finais: " << fila.consultarInicio() << endl;
    cout << "A fila está cheia? " << (fila.estaCheia() ? "Sim" : "Não") << endl;

    // Remover todos os elementos
    fila.remover(); // remove 60
    fila.remover(); // remove 70
    fila.remover(); // remove 80
    fila.remover(); // remove 90
    fila.remover(); // remove 100

    cout << "A fila está vazia? " << (fila.estaVazia() ? "Sim" : "Não") << endl;

    return 0;
}