import java.util.Scanner;
public class questao_37{
    public static void main(String[] args){
        int valor;
        int fatorial = 1;
        System.out.println("Insira um valor para calcular fatorial:");
        valor = new Scanner(System.in).nextInt();
            for( int i = 2; i <= valor; i++ )
            {
                fatorial *= i;
            }
        
        System.out.println( "O fatorial de " + valor + " é igual a " + fatorial );
        }
    }
