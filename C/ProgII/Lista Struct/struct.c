#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
} Pessoa;

void ImprimePessoa(Pessoa P){ // declara o parâmetro como uma struct

  printf("Aluno: %d  Matricula: %f Notas: %f, %f, %f", P.nome, P.matricula, P.nota1, P.nota2, P.nota3);
}

int main(){
    Pessoa Aluno[5];
    for (int i = 0; i < 5; i++){
        printf("Nome do aluno:" );
        scanf("%f", Aluno.nome);
        
        printf("N de matricula: ");
        scanf("%f", Aluno.matricula);

        printf("Nota 1: ");
        scanf("%f", Aluno.nota1);
        
        printf("Nota 2: ");
        scanf("%f", Aluno.nota2);
        
        printf("Nota 3: ");
        scanf("%f", Aluno.nota3);

        float media = (Aluno.nota1 + Aluno.nota2 + Aluno.nota3)/3;
        if (media < 7){
            printf("Aluno reprovado.");
        }else{
            printf("Aluno Aprovado.");
        }

    }
    return 0;
}