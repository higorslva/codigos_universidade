#include <iostream>
#include <functional>
#include <cmath>

// Quanto menor este número for, menor serão os retângulos e mais preciso será a aproximação
#define DELTA_X 0.0000001

// função que retorna a integral de a até b de uma função f
/*
double integral(double a, double b, const std::function<double(double)> &f){
    // variável para onde a soma de cada retângulo será adicionada
    double sum = 0.0;
    // repete através de cada x_k no intervalo [a, b]. x_k = x_(k-1) + DELTA_X.
    for (auto x_k = a; x_k <= b; x_k += DELTA_X){
        // Área do retângulo = base * altura; aqui, base = DELTA_X e a altura = f(x_k)
        sum += f(x_k) * DELTA_X;
    }
    // A variável sum agora contem a área total combinada dos retângulos
    return sum;
}*/

int main(){
    std::string function_string;
    std::cout << "Digite a função que deseja integrar (use x como variável): ";
    std::getline(std::cin, function_string);
    // função lambda que converte a string inserida pelo usuário em uma função matemática
    auto f = [function_string](double x) {
        // usando a função std::string::find, encontramos a posição de "x" na string
        // e substituímos por um número real
        size_t pos = function_string.find("x");
        std::string modified_string = function_string;
        while (pos != std::string::npos) {
            modified_string.replace(pos, 1, std::to_string(x));
            pos = modified_string.find("x", pos + 1);
        }
        // usamos a função std::stod para converter a string modificada em um número real
        return std::stod(modified_string);
    };
    double a, b;
    std::cout << "Digite o limite inferior de integração: ";
    std::cin >> a;
    std::cout << "Digite o limite superior de integração: ";
    std::cin >> b;
    
    //std::cout << integral(a, b, f) << '\n';
    double sum = 0.0;
    // repete através de cada x_k no intervalo [a, b]. x_k = x_(k-1) + DELTA_X.
    for (auto x_k = a; x_k <= b; x_k += DELTA_X){
        // Área do retângulo = base * altura; aqui, base = DELTA_X e a altura = f(x_k)
        sum += f(x_k) * DELTA_X;
    }
    std::cout << sum << std::endl;
}
