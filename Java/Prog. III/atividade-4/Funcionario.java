public class Funcionario{
    private String nome;
    private int rg;
    private double salario_base;
    
    public void setNome(String nome){
        this.nome = nome;
    }
    public void setRG(int rg){
        this.rg = rg;
    }
    public void setSalarioBase(float salario_base){
        this.salario_base = salario_base;
    }

    public String getNome(){
        return this.nome;
    }
    public int getRG(){
        return this.rg;
    }
    public double getSalarioBase(){
        return this.salario_base;
    }

}