import java.util.Random;
import java.util.Scanner;

public class Random1 {

    public static void main(String[] args) {
        int tentativa;
        Random gerador = new Random();
        System.out.println(gerador.nextInt(5));
        
        System.out.println("Descubra o numero aleatorio: ");
        tentativa = new Scanner(System.in).nextInt();
        if (tentativa != gerador)
        {
            
        }
    }
}