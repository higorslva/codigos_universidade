import java.util.Scanner;
public class questao_21{
    public static void main(String[] args){
        int cargo, salario, valor_disponivel;
        System.out.println("Insira seu cargo:");
        System.out.println("1 = Diretoria // 2 = Gerência // 3 = Operacional");
        cargo = new Scanner(System.in).nextInt();
        
        if(cargo > 3){
            System.out.println("Comando inválido. Encerrando...");
        }else{
            System.out.println("Insira seu salário atual:");
            salario = new Scanner(System.in).nextInt();
            
            if(cargo == 1){
                valor_disponivel = (salario/100)*30;
                System.out.println("Seu limite de empréstimo é de R$"+valor_disponivel);
            }else if(cargo == 2){
                valor_disponivel = (salario/100)*25;
                System.out.println("Seu limite de empréstimo é de R$"+valor_disponivel);
            }else if(cargo == 3){
                valor_disponivel = (salario/100)*20;
                System.out.println("Seu limite de empréstimo é de R$"+valor_disponivel);
            }
        }
        
        
    }
}