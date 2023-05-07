#include <stdio.h>
#include <stdlib.h>

typedef enum { RUBRO, NEGRO } Cor;

typedef struct no {
    int valor;
    Cor cor;
    struct no *esquerda;
    struct no *direita;
    struct no *pai;
} No;

No *criar_no(int valor) {
    No *no = malloc(sizeof(No));
    no->valor = valor;
    no->cor = RUBRO;
    no->esquerda = NULL;
    no->direita = NULL;
    no->pai = NULL;
    return no;
}

No *inserir_no(No *raiz, int valor) {
    No *no = criar_no(valor);
    No *pai = NULL;
    No *atual = raiz;

    while (atual != NULL) {
        pai = atual;
        if (no->valor < atual->valor) {
            atual = atual->esquerda;
        } else {
            atual = atual->direita;
        }
    }

    no->pai = pai;
    if (pai == NULL) {
        raiz = no;
    } else if (no->valor < pai->valor) {
        pai->esquerda = no;
    } else {
        pai->direita = no;
    }

    return raiz;
}

No *rotaciona_esquerda(No *raiz, No *x) {
    No *y = x->direita;
    x->direita = y->esquerda;
    if (y->esquerda != NULL) {
        y->esquerda->pai = x;
    }
    y->pai = x->pai;
    if (x->pai == NULL) {
        raiz = y;
    } else if (x == x->pai->esquerda) {
        x->pai->esquerda = y;
    } else {
        x->pai->direita = y;
    }
    y->esquerda = x;
    x->pai = y;
    return raiz;
}

No *rotaciona_direita(No *raiz, No *x) {
    No *y = x->esquerda;
    x->esquerda = y->direita;
    if (y->direita != NULL) {
        y->direita->pai = x;
    }
    y->pai = x->pai;
    if (x->pai == NULL) {
        raiz = y;
    } else if (x == x->pai->direita) {
        x->pai->direita = y;
    } else {
        x->pai->esquerda = y;
    }
    y->direita = x;
    x->pai = y;
    return raiz;
}

No *corrige_insercao(No *raiz, No *no) {
    while (no->pai != NULL && no->pai->cor == RUBRO) {
        if (no->pai == no->pai->pai->esquerda) {
            No *tio = no->pai->pai->direita;
            if (tio != NULL && tio->cor == RUBRO) {
                no->pai->cor = NEGRO;
                tio->cor = NEGRO;
                no->pai->pai->cor = RUBRO;
                no = no->pai->pai;
            } else {
                if (no == no->pai->direita) {
                    no = no->pai;
                    raiz = rotaciona_esquerda(raiz, no);
                }
                no->pai->cor = NEGRO;
                no->pai->pai->cor = RUBRO;
                raiz = rotaciona_direita(raiz, no->pai->pai);
            }
        } else {
            No *tio = no->pai->pai->esquerda;
            if (tio != NULL && tio->cor == RUBRO) {
                no->pai->cor = NEGRO;
                tio->cor = NEGRO;
                no->pai->cor = RUBRO;
                no = no->pai->pai;
            } else {
                if (no == no->pai->esquerda) {
                no = no->pai;
                raiz = rotaciona_direita(raiz, no);
                }
                no->pai->cor = NEGRO;
                no->pai->pai->cor = RUBRO;
                raiz = rotaciona_esquerda(raiz, no->pai->pai);
            }
        }
    }
            raiz->cor = NEGRO;
            return raiz;
}

void ordem(No *no) {
    if (no != NULL) {
        ordem(no->esquerda);
        printf("%d ", no->valor);
        ordem(no->direita);
    }
}

void preordem(No *no) {
    if (no != NULL) {
        printf("%d ", no->valor);
        preordem(no->esquerda);
        preordem(no->direita);
    }
}

void posordem(No *no) {
    if (no != NULL) {
        posordem(no->esquerda);
        posordem(no->direita);
        printf("%d ", no->valor);
    }
}

int main() {
    No *raiz = NULL;
    raiz = inserir_no(raiz, 10);
    raiz = inserir_no(raiz, 30);
    raiz = inserir_no(raiz, 20);
    raiz = inserir_no(raiz, 50);
    raiz = inserir_no(raiz, 40);
    raiz = inserir_no(raiz, 25);

    printf("Árvore Rubro-negra em pré ordem: ");
    preordem(raiz);
    printf("\n");

    printf("Árvore Rubro-negra em ordem: ");
    ordem(raiz);
    printf("\n");

    printf("Árvore Rubro-negra em pós ordem: ");
    posordem(raiz);
    printf("\n");
    return 0;

}