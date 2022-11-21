#include <iostream>
using namespace std;

class estoqueCelular{
    private:
        int codigoFab;
        int codigoModelo;
        double custo;
    public:
        void setDados(int f, int m, double c){
            codigoFab = f;
            codigoModelo = m;
            custo = c;
        }

    void mostraDados(){
        cout << "\nCodigo do fabricante = " << codigoFab;
        cout << "\nCodigo do modelo = " << codigoModelo;
        cout << "\nCusto do aparelho = " << custo;
        cout << endl;
    }
};
int main(){
    estoqueCelular obj1, obj2;
    obj1.setDados(1234, 777, 117.5);
    obj2.setDados(4567, 999, 599.99);
    obj1.mostraDados();
    obj2.mostraDados();
    cout << endl;

    //system("PAUSE");
    return 0;

}
