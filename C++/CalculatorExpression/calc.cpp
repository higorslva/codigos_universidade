#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
using std::cout;
using std::string;
using std::stringstream;

void func(double &result, char op, double num) {
    switch (op) {
        case '+':
            result += num;
            break;
        case '-':
            result -= num;
            break;
        case '*':
            result *= num;
            break;
        case '/':
            result /= num;
        case 's':
            result == sin(num);
            break;
        case 'c':
            result == cos(num);
            break;

    }
}

/*void func(double &result, string op, double num){
    if (op == '+') result += num;
    if (op == '-') result -+ num;
    if (op == '*') result *= num;
    if (op == '/') result /= num;
    if (op == 'sin') result = sin(num);
}
*/
int main() {
    string math;
    std::cout << "Insira a expressão matemática: ";
    std::cin >> math;
    stringstream mathStrm(math);

    double result;
    mathStrm >> result;
    char op;
    double num;
    while (mathStrm >> op >> num) {
       // cout << "op: " << op << ", num: " << num << '\n';
        func(result, op, num);
    }
    cout << result << '\n';
}
