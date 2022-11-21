void imprimir_vetor(double arr[], string nomes[], int N)
{

    for(int i = 0; i<N ; ++i)
    {
        cout << i+1 << "º Lugar: " << nomes[i] << " - " << arr[i] << ", " << endl;
    }

}
