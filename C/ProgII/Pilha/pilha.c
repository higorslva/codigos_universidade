#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *proximo;
} No;

void push(No **cabeca, int valor) {
    No *novoNo = malloc(sizeof(No));
    novoNo->valor = valor;
    novoNo->proximo = *cabeca;
    *cabeca = novoNo;
}

int pop(No **cabeca) {
    if (*cabeca == NULL) {
        printf("A pilha está vazia.\n");
        return -1;
    } else {
        No *noRemovido = *cabeca;
        int valorRemovido = noRemovido->valor;
        *cabeca = (*cabeca)->proximo;
        free(noRemovido);
        return valorRemovido;
    }
}

void imprimirPilha(No *cabeca) {
    No *atual = cabeca;
    printf("Pilha: ");
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }
    printf("\n");
}

int main() {
    No *cabeca = NULL;

    push(&cabeca, 1);
    push(&cabeca, 2);
    push(&cabeca, 3);

    imprimirPilha(cabeca);

    printf("Elementos removidos da pilha: ");
    while (cabeca != NULL) {
        printf("%d ", pop(&cabeca));
    }
    printf("\n");

    return 0;
}

/* O código acima define as funções push() e pop() para inserir e remover elementos na pilha, respectivamente.
A função push() insere um novo nó no início da lista encadeada (correspondente à inserção de um novo elemento
na pilha), enquanto a função pop() remove o nó no início da lista encadeada (correspondente à remoção de um
elemento da pilha). A função imprimirPilha() é usada para imprimir os elementos da pilha.

O programa cria uma pilha vazia, insere elementos na pilha usando a função push(), imprime a pilha usando a
função imprimirPilha() e, em seguida, remove elementos da pilha usando a função pop(). Observe que a
função pop() verifica se a pilha está vazia antes de tentar remover um elemento.*/