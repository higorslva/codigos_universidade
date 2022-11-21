public class Pessoa
{
    protected String nome;
    protected String cpf;
    protected String sexo;
    protected int idade;
    protected String atributo;
    
    protected static int identificador=0;
    protected int ident=0;
    
    public Pessoa(){
        Pessoa.identificador++;
        this.ident=Pessoa.identificador;
    }
    
    public void setNome(String nome){
        this.nome = nome;
    }
    public void setCPF(String cpf){
        this.cpf = cpf;
    }
    public void setIdade(int idade){
        this.idade = idade;
    }
    public void setAtributo(String atributo){
        this.atributo = atributo;
    }
    public void setSexo (String sexo){
        this.sexo = sexo;
    }
    
    public String getNome(){
        return this.nome;
    }
    public String getCPF(){
        return this.cpf;
    }
    public int getIdade(){
        return this.idade;
    }
    public String getAtributo(){
        return this.atributo;
    }
    public String getSexo(){
        return this.sexo;
    }
    
     public int getIdentificador(){
       return this.ident;
    }
    
}
