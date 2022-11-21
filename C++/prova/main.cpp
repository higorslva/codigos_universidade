#include <iostream>
#include <string>

using namespace std;

int main ()

{
    int arr[10], i, j, temp;
    double a;


    cout << "Digite 10 valores: " << endl;
    for (i = 0; i < 10; i++)

    {
        cout << "Valor: ";
        cin >> a;
        arr[i]=a;
        for (j = 0; j < 10; j++)
        {
            if (arr[j] > arr[i]){
            int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
            }
        }

    }
    cout << "Valores declarados: " endl;
    for (i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
    system("pause");
    return 0;
}

/*
#include <iostream>
#include <string>

using namespace std;

void imprimir_vetor(double arr[], string nomes[], int N)
{

    for(int i = 0; i<N ; ++i)
    {
        cout << i+1 << "º Lugar: " << nomes[i] << " - " << arr[i] << ", " << endl;
    }

}

void ordenar_vetor(double arr[], string nomes[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if (arr[j] > arr[i])
			{
				int aux = arr[i];
				arr[i] = arr[j];
				arr[j] = aux;

				string temp = nomes[i];
				nomes[i] = nomes[j];
				nomes[j] = temp;
			}

		}
	}

	imprimir_vetor(arr, nomes, n);

}

/*int main()
{
    const int N = 5;
    double medias[N];
    double notas[N*2];
    string nomes[N];
    string nome;

    int contador = 0;
    for(int i =1; i<=N*2; ++i){
        double nota;
        cin >> nota;
        notas[i] = nota;

        if(i%2 == 0){
            /*cout << "Insira o nome do aluno: ";
            cin >> nome;
            nomes[contador] = nome;
            medias[contador] = (notas[i]+notas[i-1])/2;
            contador++;
        }
    }

    //ordenar_vetor(medias, N);



    return 0;
}

int main()

{
    const int n= 5;
    double medias[n];
    string nomes[n];

        for(int i=0; i<n; ++i)
        {
            setlocale(LC_ALL, "portuguese");
            double nota1, nota2, media;
            string nomealuno;
            cout << "Insira O Nome Do " << i+1 <<"º Aluno:" << endl;
            cin >> nomealuno;
            cout << "Digite a nota de " << nomealuno << "\n" <<endl;
            cout << ("Primeira nota: ");
            cin >> nota1;
            cout << ("Segunda nota: ");
            cin >> nota2;
            media = (nota1+nota2)/2;
            cout << "Média das notas: " << media << endl;
            cout << ("\n \n");
            medias[i]=media;
            nomes[i] = nomealuno;

        }

    ordenar_vetor(medias, nomes, n);
}
*/
