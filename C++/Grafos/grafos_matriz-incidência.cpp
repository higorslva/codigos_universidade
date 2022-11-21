// Grafo - Matriz de incidência

#include <iostream>

using namespace std;

int grafo[5][5] = // matriz do grafo representando a incidência
{   // arestas
	{0, 0, 1, 0, 0},
	{0, 0, 1, 0, 0},
	{1, 1, 0, 1, 1}, // vértices
	{0, 0, 1, 0, 1},
	{0, 0, 1, 1, 0}
};

bool tem_ligacao(int v, int a) // verifica se v1 e v2 tem alguma ligação
{
	if(grafo[v][a]) // se V e A tiverem ligações, retorna true (1). Caso contrário, retorna 0 (false)
		return true;
	return false;
}

int main(int argc, char *argv[])
{
    int a, b;
    cout << "Digite o vértice: ";
    cin >> a;
    cout << "Digite a aresta: ";
    cin >> b;

	cout << tem_ligacao(a, b) << endl; // retorna se o vértice e aresta tem ligação; 1 = true, 0 = false
	return 0;
}
