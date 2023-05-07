#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura de nó da árvore
struct no {
    int data;
    struct no* esq;
    struct no* dir;
};

// Função para criar um novo nó com um dado valor
struct no* novoNo(int data) {
    struct no* no = (struct no*)malloc(sizeof(struct no));
    no->data = data;
    no->esq = NULL;
    no->dir = NULL;
    return(no);
}

// Função para percorrer a árvore em Pré-ordem (raiz-esquerda-direita)
void preOrdem(struct no* no) {
    if (no == NULL) {
        return;
    }
    printf("%d ", no->data);
    preOrdem(no->esq);
    preOrdem(no->dir);
}

// Função para percorrer a árvore em Ordem (esquerda-raiz-direita)
void emOrdem(struct no* no) {
    if (no == NULL) {
        return;
    }
    emOrdem(no->esq);
    printf("%d ", no->data);
    emOrdem(no->dir);
}

// Função para percorrer a árvore em Pós-ordem (esquerda-direita-raiz)
void posOrdem(struct no* no) {
    if (no == NULL) {
        return;
    }
    posOrdem(no->esq);
    posOrdem(no->dir);
    printf("%d ", no->data);
}

// Função principal
int main() {
    int n, i;
    printf("Digite o número de nós da árvore: ");
    scanf("%d", &n);

    // Criação da árvore
    struct no* root = NULL;
    int data;
    for (i = 0; i < n; i++) {
        printf("Digite o valor do nó %d: ", i+1);
        scanf("%d", &data);
        if (root == NULL) {
            root = novoNo(data);
        }
        else {
            struct no* atual = root;
            while (1) {
                if (data < atual->data) {
                    if (atual->esq == NULL) {
                        atual->esq = novoNo(data);
                        break;
                    }
                    else {
                        atual = atual->esq;
                    }
                }
                else if (data > atual->data) {
                    if (atual->dir == NULL) {
                        atual->dir = novoNo(data);
                        break;
                    }
                    else {
                        atual = atual->dir;
                    }
                }
                else {
                    break;
                }
            }
        }
    }
    printf("-------------------\n");
    // Percorre a árvore em Pré-ordem
    printf("Pré ordem: ");
    preOrdem(root);
    printf("\n");
 
    // Percorre a árvore em Ordem
    printf("Em ordem: ");
    emOrdem(root);
    printf("\n");
 
    // Percorre a árvore em Pós-ordem
    printf("Pós ordem: ");
    posOrdem(root);
    printf("\n");

    return 0;
}
