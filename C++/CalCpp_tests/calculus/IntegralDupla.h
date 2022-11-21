#include <bits/stdc++.h>

using namespace std;

float fun(float x, float y) {
    return pow(pow(x, 4) + pow(y, 5), 0.5);
}
// Usando a regra de Simpson
float doubleIntegral(float passo_x, float passo_y, float limx_menor, float limx_maior, float limy_menor, float limy_maior) {
    int n1, n2;
    float arr[50][50], arr_2[50], result;
    n1 = (limx_maior - limx_menor) / passo_x + 1;
    n2 = (limy_maior - limy_menor) / passo_y + 1;
    for (int i = 0; i < n1; ++i) {
        for (int j = 0; j < n2; ++j) {
            arr[i][j] = fun(limx_menor + i * passo_x, limy_menor + j * passo_y);
        }
    }
    for (int i = 0; i < n1; ++i) {
        arr_2[i] = 0;
        for (int j = 0; j < n2; ++j) {
            if (j == 0 || j == n2 - 1)
                arr_2[i] += arr[i][j];
            else if (j % 2 == 0)
                arr_2[i] += 2 * arr[i][j];
            else
                arr_2[i] += 4 * arr[i][j];
        }
        arr_2[i] *= (passo_y / 3);
    }
    result = 0;
    for (int i = 0; i < n1; ++i) {
        if (i == 0 || i == n1 - 1)
            result += arr_2[i];
        else if (i % 2 == 0)
            result += 2 * arr_2[i];
        else
            result += 4 * arr_2[i];
    }
    result *= (passo_x / 3);
    return result;
}
void IntegralDupla(){
    float passo_x, passo_y, limx_menor, limx_maior, limy_menor, limy_maior;
    cout << "Insira a equação de x: ";
    cin >> passo_x;
    cout << "Insira a equação de y: ";
    cin >> passo_y;
    cout << "Insira o menor limite de integração de x: ";
    cin >> limx_menor;
    cout << "Insira o maior limite de integração de x: ";
    cin >> limx_maior;
    cout << "Insira o menor limite de integração de y: ";
    cin >> limy_menor;
    cout << "Insira o maior limite de integração de y: ";
    cin >> limy_maior;

    cout << "Resultado: " << endl;
    cout << (passo_x, passo_y, limx_menor, limx_maior, limy_menor, limy_maior) << endl;

}
