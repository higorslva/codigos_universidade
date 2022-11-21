#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa
{
    int idade;
    char nome[30];
} pessoa;

int main ()
{
    pessoa vetor [5];
    int i;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i].idade;)
        scanf("%s", &vetor[i].nome;)
    }
    for (int i = 0; i < 5; i++)
    {
        printf ("Nome %d", vetor[i].nome)
        printf ("Idade %d", vetor[i].idade)
    }
}
