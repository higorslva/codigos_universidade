#include <stdio.h>
#define MAX 10 // tamanho máximo da pilha

int pilha[MAX];
int topo = -1;
void push(int valor) {
    if (topo == MAX - 1) {
        printf("Erro: Pilha cheia\n");
        return;
    }
    topo++;
    pilha[topo] = valor;
}

int pop() {
    if (topo == -1) {
        printf("Erro: Pilha vazia\n");
        return -1;
    }
    int valor = pilha[topo];
    topo--;
    return valor;
}

int main() {
    push(10);
    push(20);
    push(30);
    printf("%d\n", pop()); // 30
    printf("%d\n", pop()); // 20
    printf("%d\n", pop()); // 10
    printf("%d\n", pop()); // Erro: Pilha vazia
    return 0;
}