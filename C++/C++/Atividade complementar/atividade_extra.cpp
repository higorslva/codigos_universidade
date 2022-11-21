#include <iostream>
#include <math.h>

using namespace std;

double standard_error(double vetor[], int n, double mean)
{
    double error = 0;
    for (int i = 0; i< n ; ++i)
    {
        error = error + pow(vetor[i]-mean, 2);
    }
    error = error / n;

    return sqrt(error);

}
int main (void)
{
    int linha = 5, coluna = 5;
    int matriz[linha][coluna] {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    int vetorSoma[linha];
    int i, j;

    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            vetorSoma[i] = (matriz[i][j])/5;
        }
    }
    for( i=0; i<5; i++ )
    {
		cout << "media: "<< i << vetorSoma[i] << endl;
	}
    return 0;
}
