#include <iostream>
#include <math.h>

using namespace std;

double mean(double vetor[], int n)
{
    double mean = 0;

    for(int i = 0 ; i < n ; ++i){
        mean = mean + vetor[i];
    }

    return mean/n;

}

double standard_error(double vetor[], int n, double mean){
    double error = 0;
    for (int i = 0; i< n ; ++i){
        error = error + pow(vetor[i]-mean, 2);
    }
    error = error / n;

    return sqrt(error);

}

int main(int argc, char const *argv[])
{
    const int n = 10;
    double vetor[n] = {0,1,2,3,4,5,6,7,8,9};
    double media = mean(vetor, n);
    cout << "Média: " <<  media << "\n DP: " << standard_error(vetor, n, media) << endl;


	return 0;
}
