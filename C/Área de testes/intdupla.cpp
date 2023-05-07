#include <iostream>
#include <cmath>

using namespace std;

double f(double x, double y) {
    // Defina aqui a sua função a ser integrada
    return sin(x) + cos(y);
}

double midpoint_rule(double a, double b, double c, double d, int nx, int ny) {
    double hx = (b - a) / nx;
    double hy = (d - c) / ny;
    double sum = 0;
    for (int i = 0; i < nx; i++) {
        double xi = a + (i + 0.5) * hx;
        for (int j = 0; j < ny; j++) {
            double yj = c + (j + 0.5) * hy;
            sum += f(xi, yj);
        }
    }
    return hx * hy * sum;
}

int main() {
    double a, b, c, d;
    int nx, ny;
    cout << "Entre com os limites de integração (a, b, c, d): ";
    cin >> a >> b >> c >> d;
    cout << "Entre com o número de subintervalos nas direções x e y: ";
    cin >> nx >> ny;
    double result = midpoint_rule(a, b, c, d, nx, ny);
    cout << "O valor da integral dupla é: " << result << endl;
    return 0;
}
