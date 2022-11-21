public class ControledeBonificacoes
{
    private double totalDeBonificacoes = 0;
    
    public void registra(Funcionario funcionario){
        this.totalDeBonificacoes+= funcionario.getBonificacao();
    }
    
    public double getTotaldeBonificacoes(){
        return this.totalDeBonificacoes;
    }
}
