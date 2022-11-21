public class Funcionario{
    private String nome;
    private int rg;
    private double salario;
    
    public void setNome(String nome){
        this.nome = nome;
    }
    public void setRG(int rg){
        this.rg = rg;
    }
    public void setSalario(float salario){
        this.salario = salario;
    }

    public String getNome(){
        return this.nome;
    }
    public int getRG(){
        return this.rg;
    }
    public double getSalario(){
        return this.salario;
    }

}