#include <stdio.h>
#include <math.h>

double f(double x) {
    // Defina aqui a sua função a ser integrada
    return pow(x, 2);
}

double trapezoidal_rule(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.5 * (f(a) + f(b));
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += f(x);
    }
    return h * sum;
}

int main() {
    double a, b;
    int n;
    printf("Entre com os limites de integração (a e b): ");
    scanf("%lf %lf", &a, &b);
    printf("Entre com o número de intervalos (n): ");
    scanf("%d", &n);
    double result = trapezoidal_rule(a, b, n);
    printf("O valor da integral é: %lf\n", result);
    return 0;
}
