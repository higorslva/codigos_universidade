import java.util.Scanner;
public class questao_7
{
   public static void main(String[] args)
   {
       float comissao, despesa_cliente;
       System.out.println("Digite o valor da despesa do cliente: ");
       despesa_cliente = new Scanner(System.in).nextFloat();
       
       comissao = (despesa_cliente/100)*10;
       
       System.out.println("O garçom deve receber R$"+comissao+", que equivale a 10% da despesa do cliente");
   }
}
