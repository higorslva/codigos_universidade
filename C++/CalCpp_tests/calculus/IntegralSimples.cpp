#include <iostream>
#include <functional>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;
/*
using std::function; using std::cout;
using std::cin; using std::endl;
using std::string;
*/

// Quanto menor este número for, menor serão os retângulos e mais preciso será a aproximação
#define DELTA_X 0.0000001

// f(x) = x^2 + sen(1)
double f(double x){
    return x * x + sin(1);
}
// função que retorna a integral de a até b de uma função f
double integral(double a, double b, const function<double(double)> &f){
    // variável para onde a soma de cada retângulo será adicionada
    double sum = 0.0;
    // repete através de cada x_k no intervalo [a, b]. x_k = x_(k-1) + DELTA_X.
    for (auto x_k = a; x_k <= b; x_k += DELTA_X){
        // Área do retângulo = base * altura; aqui, base = DELTA_X e a altura = f(x_k)
        sum += f(x_k) * DELTA_X;
    }
    // A variável sum agora contem a área total combinada dos retângulos
    return sum;
}

int main(){
    // Encontra a integral nos limites 0 a 1 de f(x), colocada no início do código
    // double a, b;
    //cout << integral(a, b, f) << '\n';
    cout << integral(0, 1, f) << '\n';
    // O próximo passo é o usuário digitar uma string e o algoritmo salvar no início do código, então
    // perguntar aqui os limites de integração e enfim devolver o resultado
}
