public class Vendedores extends Funcionario
{
    private int total_vendas;
    
    public void setTotalVendas(){
        this.total_vendas++;
    }

    public int getTotalVendas(){
        return this.total_vendas;
    }

    public void hollerith(){
        double sb = 0;
        if (total_vendas>0){
            sb = getSalario() + getSalario()*0.05;
        }else{
            sb = getSalario();
        }
        
        this.total_vendas=0;
        
        System.out.println("Seu salario e: R$"+sb);
    }
}
