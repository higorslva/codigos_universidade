#include <stdio.h>
#include <stdlib.h>

#define ORDER 3 // ordem da árvore B

// estrutura do nó da árvore B
typedef struct node {
    int n; // número de chaves no nó
    int keys[ORDER - 1]; // chaves armazenadas no nó
    struct node *children[ORDER]; // ponteiros para os filhos
} Node;

// função para criar um novo nó
Node *createNode(int key) {
    Node *newNode = (Node*) malloc(sizeof(Node));
    newNode->n = 1;
    newNode->keys[0] = key;
    for (int i = 0; i < ORDER; i++)
        newNode->children[i] = NULL;
    return newNode;
}

// função para inserir uma chave na árvore B
Node *insert(Node *root, int key) {
    // se a raiz for nula, cria um novo nó com a chave
    if (root == NULL)
        return createNode(key);

    // encontra o índice da chave no nó atual
    int i = 0;
    while (i < root->n && key > root->keys[i])
        i++;

    // insere a chave no filho correspondente
    if (i < root->n && key == root->keys[i])
        return root;
    else {
        Node *child = insert(root->children[i], key);
        if (root->n < ORDER - 1) {
            // se o nó atual não estiver cheio, insere a chave no nó atual
            int j = root->n;
            while (j > i) {
                root->keys[j] = root->keys[j - 1];
                root->children[j + 1] = root->children[j];
                j--;
            }
            root->keys[i] = key;
            root->children[i + 1] = child;
            root->n++;
        } else {
            // se o nó atual estiver cheio, divide o nó
            Node *newNode = (Node*) malloc(sizeof(Node));
            int mid = (ORDER - 1) / 2;
            newNode->keys[0] = root->keys[mid];
            newNode->n = ORDER - 1 - mid;
            for (int j = 1; j < newNode->n; j++) {
                newNode->keys[j] = root->keys[mid + j];
                newNode->children[j] = root->children[mid + j];
            }
            newNode->children[newNode->n] = root->children[ORDER - 1];
            root->n = mid;
            if (i < mid) {
                // insere a chave no nó da esquerda
                int j = root->n;
                while (j > i) {
                    root->keys[j] = root->keys[j - 1];
                    root->children[j + 1] = root->children[j];
                    j--;
                }
                root->keys[i] = key;
                root->children[i + 1] = child;
            } else {
                // insere a chave no nó da direita
                int j = newNode->n;
                while (j > (i - mid - 1)) {
                    newNode->keys[j] = newNode->keys[j - 1];
                    newNode->children[j + 1] = newNode->children[j];
                    j--;
                }
                newNode->keys[i - mid]= key;
            newNode->children[i - mid] = child;
        }
        return newNode;
    }
}

}

// função para imprimir as chaves de um nó
void printNode(Node *node) {
    for (int i = 0; i < node->n; i++)
    printf("%d ", node->keys[i]);
}

// função para imprimir a árvore B em ordem
void inorder(Node *root) {
    if (root != NULL) {
        inorder(root->children[0]);
        printNode(root);
        for (int i = 1; i <= root->n; i++) {
            inorder(root->children[i]);
        }
    }
}

// função principal
int main() {
    Node *root = NULL;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 60);
    root = insert(root, 70);
    root = insert(root, 80);
    root = insert(root, 90);
    inorder(root);
    return 0;
}