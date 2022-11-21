//Questão 4 da lista
import java.util.Scanner;
public class questao_4
{
    public static void main(String[] args)
    {
        float n1, n2, n3, n4, media;
        
        System.out.println("Média aritmética de 4 notas");
        System.out.println("Insira a primeira nota: ");
        n1 = new Scanner(System.in).nextInt();
        
        System.out.println("Insira a segunda nota: ");
        n2 = new Scanner(System.in).nextInt();
        
        
        System.out.println("Insira a terceira nota: ");
        n3 = new Scanner(System.in).nextInt();
        
        
        System.out.println("Insira a ultima nota: ");
        n4 = new Scanner(System.in).nextInt();
        
        media = (n1+n2+n3+n4)/4;
        
        System.out.println ("A média final do aluno é: "+media);
    }
}
