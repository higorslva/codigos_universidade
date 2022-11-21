#include<stdio.h>
#include<stdlib.h>

main()
{
    int x, contaluno, matricula;
    float n1,n2,n3,n4, mediaaluno=0, somamedia, mediaturma;
    contaluno=0;
    mediaaluno=0;
    somamedia=0;

    while (matricula!=0);
    {
    if (matricula!=0)
    {
        printf("Digite a nota1 %f : ", n1);
        scanf("%f", &n1);
        if (n1<=10)
        {
            mediaaluno= mediaaluno+n1;
        }
        else
        {
            printf("Digite uma nota valida :\n");
        }
        printf("Digite a nota2 %f : ", n2);
        scanf("%f", &n2);
        if (n2<=10)
        {
            mediaaluno= mediaaluno+n2;
        }
        else
        {
            printf("Digite uma nota valida :\n");
        }
        printf("Digite a nota3 %f : ", n3);
        scanf("%f", &n3);
        if (n3<=10)
        {
            mediaaluno= mediaaluno+n3;
        }
        else
        {
            printf("Digite uma nota valida :\n");
        }
        printf("Digite a nota4 %f : ", n4);
        scanf("%f", &n4);
        if (n4<=10)
        {
            mediaaluno= mediaaluno+n4;
        }
        else
        {
            printf("Digite uma nota valida :\n");
        }
        mediaaluno = (n1+n2+n3+n4)/4;
        contaluno=contaluno+1;
    }
    contaluno= contaluno+1;
    somamedia= somamedia+mediaaluno;
    mediaturma= somamedia/contaluno;

    printf("numero de Alunos da turma : %i", contaluno);
    printf("\n");
    printf("media da turma e : %i",  mediaturma= somamedia/contaluno);
    printf("\n");
    }

getch();
}
