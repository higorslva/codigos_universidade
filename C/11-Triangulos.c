#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float a,b,c;

    printf("\tEste programa recebe a medida dos lados de um possivel triangulo.\n");
    printf("\tClassificando-os em triangulos: Retangulo, Obtusangulo, Acutangulo, e/ou Equilatero.\n");
    printf("\tIndica ainda se os lados sugeridos nao formarem triangulo algum.\n");

    printf("\n\nInforme a primeira medida: ");
    scanf("%f",&a);
    printf("\nInforme a segunda medida: ");
    scanf("%f",&b);
    printf("\nInforme a terceira medida: ");
    scanf("%f",&c);
    {
        if((a>(b+c))||(b>(a+c))||(c>(a+b)))
        {
            printf("\n\tOs lados sugeridos nao foram nenhum triangulo.");
        }

        else if((a<=(b+c))||(b<=(a+c))||(c<=(a+b)))
        {

           if((((pow(a,2))==(pow(b,2)))+(pow(c,2)))||((pow(b,2))==(pow(a,2)+(pow(c,2))))||(pow(c,2)==(pow(a,2)+(pow(b,2)))))
                 {
                     printf("\n\tOs lados sugeridos formam um triangulo retangulo.");
                 }

           if(((pow(a,2))>((pow(b,2))+(pow(c,2))))||((pow(b,2))>((pow(a,2))+(pow(c,2))))||((pow(c,2)>((pow(a,2)+(pow(b,2)))))))
                 {
                     printf("\n\tOs lados sugeridos formam um triangulo obtusangulo.");
                 }

           if(((pow(a,2))<((pow(b,2))+(pow(c,2))))||((pow(b,2))<(pow(a,2)+(pow(c,2))))||((pow(c,2))<((pow(a,2))+(pow(b,2)))))
                 {
                     printf("\n\tOs lados sugeridos formam um triangulo acutangulo");
                 }

           if(a==b==c)
                 {
                     printf("\n\tOs lados sugeridos formam um triangulo equilatero");
                 }

           if(((a!=b)&&(b==c))||((b!=a)&&(a==c))||((c!=a)&&(a==b)))
                 {
                     printf("\n\tOs lados sugeridos formam um triangulo isoceles");
                 }
        }


        }

    getch();

}
