import java.util.Scanner;
public class Exercicio12 {
    public static void main(String[] args) {
        String nome;
        double nota1, nota2, nota3, media, rec, media_rec;
        
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
            System.out.println(nome + ", você foi aprovado com média " + media);
        }
        else if(media >=5) {
            System.out.println(nome +", você ficou de recuperação com média "+media);
            System.out.println("Qual a sua nota na prova de recuperaçao?");
            rec = new Scanner(System.in).nextDouble();
            media_rec = (media + rec)/2;
            if (media_rec >=5){
                System.out.println("Voce foi aprovado com media " + media_rec);
            }else{
                System.out.println("Voce foi reprovado com media " + media_rec);
            }
            
            System.out.println("Sua nota final e: " + media_rec);
        }
        else {
            System.out.println(nome + ", você foi reprovado com média " + media);
        }
    }
}
