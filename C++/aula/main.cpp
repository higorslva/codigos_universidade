#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;
/*
double media(double vetor[], int n)
{
    double media = 0;

    for(int i = 0 ; i < n ; ++i){
        media = vetor[i];
    }

    return media/n;

}
double standard_error(double vetor[], int n, double media)
{
    double error = 0;
    for (int i = 0; i< n ; ++i)
    {
        error = error + pow(vetor[i]-mean, 2);
    }
    error = error / n;

    return sqrt(error);

}*/
void bubble()
{
     int i,j,i1,j1;
     for (i=0;i<5;i++){
         for (j=0;j<5;j++){
             for (i1=i+1;i1<5;i1++){
                 for (j1=j;j1<5;j1++){
                     if (mat[i][j]>mat[i1][j1])
                     {
                        aux[1][1]=mat[i][j];
                        mat[i][j]=mat[i1][j1];
                        mat[i1][j1]=aux[1][1];
                     }

                 }
             }
         }
     }
}


int main()
{
    int matriz[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    int i, j, temp;
    for (int i; i >= 0; i++)
        for
        {
            media=matriz[i]/5
        }

    return 0;
}
