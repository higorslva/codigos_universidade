import java.util.Scanner;

public class questao_5{
    public static void main(String[] args){
        float emprestimo, meses, juros, divida;
        
        System.out.println("Cálculo da dívida usando juros simples");
        System.out.println("Insira o valor do emprestimo solicitado:");
        emprestimo = new Scanner(System.in).nextFloat();
        System.out.println("A quantidade de meses do parcelamento:");
        meses = new Scanner(System.in).nextFloat();
        
        System.out.println("O valor dos juros:");
        juros = new Scanner(System.in).nextFloat();
        
        divida = emprestimo+(meses*juros);
        
        System.out.println("O valor total da dívida é de R$"+divida);
    }
}