#include "IntegralSimples.h"

double calculate_integral(const std::string& function_string, double a, double b) {
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
