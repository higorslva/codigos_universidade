import java.util.Scanner;
public class questao_20{
    public static void main(String[] args){
        String nome1, nome2;
        double idade1, idade2;
        
        System.out.println("Insira o primero nome:");
        nome1 = new Scanner(System.in).next();
        System.out.println("Insira a idade:");
        idade1 = new Scanner(System.in).nextDouble();
        
        System.out.println("Insira o segundo nome:");
        nome2 = new Scanner(System.in).next();
        System.out.println("Insira a idade:");
        idade2 = new Scanner(System.in).nextDouble();
        
        if(idade1 > idade2){
            System.out.println(nome1+" é mais velho(a) que "+nome2);
        }else if (idade1 < idade2){
            System.out.println(nome2+" é mais velho(a) que "+nome1);
        }else if (idade1 == idade2){
            System.out.println(nome1+ " e "+nome2+" tem a mesma idade.");
        }
        
    }
}