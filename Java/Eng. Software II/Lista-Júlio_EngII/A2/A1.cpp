#include <iostream>
using namespace std;

class aluno{
    protected:
     String nome;
     String matricula;
     double nota_prova1;
     double nota_prova2;
     double nota_trab;
    
    public void setMatricula (String matricula){
        this.matricula = matricula;
    }
    
    public void setNome (String nome){
        this.nome = nome;
    }
    
    public void setNota_Prova1 (double nota_prova1){
        this.nota_prova1 = nota_prova1;
    }
    
    public void setNota_Prova2 (double nota_prova2){
        this.nota_prova2 = nota_prova2;
    }
    
    public void setNotaTrab (double nota_trab){
        this.nota_trab = nota_trab;
    }
}

int main (){
    
}