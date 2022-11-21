import java.util.Scanner;
public class menu
{
    Scanner entrada = new Scanner(System.in);
    public menu()
    {
        int opt;
        System.out.println("Insira uma opção: [1] Teste - [2] - Teste2");
        opt = entrada.nextInt();
        switch(opt){
            case 1:
                //teste.opcao();
                break;
            case 2:
                test.teste2();
                break;
        }
    }
}
