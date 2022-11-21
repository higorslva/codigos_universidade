public class Emprestimo
{
    double salario_liquido;
    double taxa = 0.3;
    
    public void analise(double bruto, double desconto, double valor_emprestimo)
    {
        this.salario_liquido = bruto-desconto;
        if (salario_liquido*taxa>=valor_emprestimo){
            System.out.println("Emprestimo concedido!");
        }else{
            System.out.println("Emprestimo negado!");
        }
    }
    
}
