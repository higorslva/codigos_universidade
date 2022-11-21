import java.util.Scanner;

public class questao_3{
    public static void main(String[]args)
    {
       float man, woman, porc_man, porc_woman, total;
        
        System.out.println("Insira a quantidade de homens na classe: ");
        man = new Scanner(System.in).nextFloat();
        
        System.out.println("Insira a quantidade de mulheres na classe: ");
        woman = new Scanner(System.in).nextFloat();
        
        total = man + woman; // Soma os dados para obter o número de pessoas da classe
        porc_man = (man*100)/total; //Calcula a porcentagem de homens
        porc_woman = (woman*100)/total; //Calcula a porcentagem de mulheres. Ambos usam a regra de três como cálculo.
        
        System.out.println("A turma corresponde a: "+porc_man+"% de homens e "+porc_woman+"% de mulheres.");
        
        
    }
}