// Exemplo de matriz representada por vetor de ponteiros

#include <stdio.h>
#include <stdlib.h>
#define LINHAS 2
#define COLUNAS 2

int main(int argc, char *argv[])
{
	// declaração de variável ponteiro para ponteiro
	int **mat;

	// alocando o vetor de ponteiros
	mat = (int**)malloc(LINHAS * sizeof(int*));

	// alocando cada uma das linhas da matriz
	int i;
	for(i = 0; i < LINHAS; i++)
		mat[i] = (int*)malloc(COLUNAS * sizeof(int));

	int j;

	// preenchendo a matriz
	for(i = 0; i < LINHAS; i++)
	{
		for(j = 0; j < COLUNAS; j++)
			mat[i][j] = i + j;
	}

	// mostrando os elementos da matriz
	for(i = 0; i < LINHAS; i++)
	{
		for(j = 0; j < COLUNAS; j++)
			printf("%d\t", mat[i][j]);
		printf("\n");
	}

	// liberando o espaço de memória

	// libera cada linha
	for(i = 0; i < LINHAS; i++)
		free(mat[i]);

	// libera o vetor de ponteiros
	free(mat);

	return 0;
}