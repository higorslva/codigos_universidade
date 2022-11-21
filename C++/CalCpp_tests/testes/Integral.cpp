#include <iostream>
#include <functional>
#include <cmath>
#include <string>


using std::function; using std::cout;
using std::cin; using std::endl;
using std::string;

#define DELTA_X 0.0000001


// f(x) = x^2 + sen(1)
double f(double x){
    string math = "sin(x)";
    string::size_type sz;
    double input = std::stod(math,&sz);
    return input;
}
double integral(double a, double b, const function<double(double)> &f){
    double sum = 0.0;
    for (auto x_k = a; x_k <= b; x_k += DELTA_X){
        sum += f(x_k) * DELTA_X;
    }
    return sum;
}

int main(){
    cout << integral(0, 1, f) << '\n';
}
