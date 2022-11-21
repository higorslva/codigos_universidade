public class Servidor extends Pessoa{
    protected double salario;
    protected String funcao;
    
    public void setSalario(double salario){
        this.salario = salario;
    }
    public void setFuncao(String funcao){
        this.funcao = funcao;
    }
    
    public double getSalario(){
        return this.salario;
    }
    public String getFuncao(){
        return this.funcao;
    }
}
