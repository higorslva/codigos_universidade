// Implementação de acordo com o exercício 13
import java.util.Scanner;
public class questao_13 {
    public static void main(String[] args) {
        String nome;
        double nota1, nota2, nota3, media, recuperacao, mediarec;
        System.out.println("Qual é o seu nome?");
        nome = new Scanner(System.in).next();
        
        System.out.println("Entre com a primeira nota:");
        nota1 = new Scanner(System.in).nextDouble();
        
        System.out.println("Entre com a segunda nota:");
        nota2 = new Scanner(System.in).nextDouble();
        
        System.out.println("Entre com a terceira nota:");
        nota3 = new Scanner(System.in).nextDouble();
        
        media = (nota1+nota2+nota3)/3;
        if(media >= 7) {
            System.out.println("Aluno "+nome + "está aprovado com média " + media);
        }
        else if(media >=5) {
            System.out.println("Aluno "+nome + " está de recuperação com média "+media);
            System.out.println("Insira sua nota da prova de recuperação:");
            recuperacao = new Scanner(System.in).nextDouble();
            mediarec = (media + recuperacao)/2;
            if(mediarec >= 5){
                System.out.println("Aluno "+nome+" está aprovado com média "+mediarec);
            }
            else{
                System.out.println("Aluno "+nome+" está reprovado com média "+mediarec); 
            }
        }
        else {
            System.out.println("Aluno "+nome + "está reprovado com média " + media);
        }
    }
}
