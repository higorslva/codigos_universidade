public class Vendedores extends Funcionario
{
    private int vendas;
    
    public void setVendas(int vendas){
        this.vendas = vendas;
    }

    public int getVendas(){
        return this.vendas;
    }

    public void informarVenda(){
        System.out.println("O total de vendas durante o mês foi: " + this.vendas);  
    }
    public void salarioTotal(){
        double comissao = getSalarioBase()*0.05;
        double salarioTotal = getSalarioBase() + this.vendas*comissao;
        System.out.println("Sua comissão com " +this.vendas+ " vendas é: R$" + this.vendas*comissao);
        System.out.println("Seu salário total é: R$" + salarioTotal);
    }
}
