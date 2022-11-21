public abstract class Funcionario{
   protected String nome;
   protected double salario;
   protected String rg;
   protected boolean situacao;
   protected static int identificador=0;
   protected int ident=0;
   
   public Funcionario(){
       Funcionario.identificador++;
       this.ident=Funcionario.identificador;
   }
   
   public void setNome(String nome){
       this.nome=nome;
   }
   public void setSalario(double salario){
       this.salario=salario;
   }
   public void setRg(String rg){
       this.rg=rg;
   }
   public void setSituacao(boolean situacao){
       this.situacao=situacao;
   }
   public String getNome(){
       return this.nome;
   }
   public double getSalario(){
       return this.salario;
   }
   public String getRG(){
       return this.rg;
   }
   public boolean getSituacao(){
       return this.situacao;
   }
   
   public int getIdentificador(){
       return this.ident;
   }
   
   public abstract double getBonificacao();
}