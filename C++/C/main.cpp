#include <iostream>
using namespace std;

class Caderneta()
{
public;
    int turma;
    void bem_vindo()
    {
        std::cout << "Bem vindo à caderneta" <<std::endl;
    }
};

int main ()
{
    Caderneta a;
    a.turma = 2019
    a.bem_vindo();
    std::cout << "Turma: " << a.turma << std::endl;
    return 0;
}
