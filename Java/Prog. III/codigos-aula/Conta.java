public class Conta{
    protected int numero;
    protected String nome;
    protected double saldo;
    double limite;
    protected static int totalDeContas;
    
    public Conta(int numero){
        this.numero=numero;
        this.limite = 0;
        Conta.totalDeContas++;
    }
    public Conta(int numero, String nome){
        this(numero);
        this.nome = nome;
    }
    public Conta(int numero, String nome, double limite){
        this(numero, nome);
        this.limite = limite;
    }
    
    public void sacar(double valor){
         if(this.saldo + this.limite < valor) {
         System.out.println("Saldo Insuficiente para saque!");
        }
       else{
            this.saldo-=valor;
             System.out.println("Saque Realizado com Sucesso!");
             System.out.println("Saldo: "+getSaldo());
        }
    }
    
    public void depositar(double valor){
        if(valor > 0){
            this.saldo+=valor;
        }else{
            System.out.println("Valor invalido");
        }
    }
    
    public void imprimeDados(){
        System.out.println("Nome: "+this.nome);
    }
    public void transfere(double valor, Conta c){
        sacar(valor);
        c.depositar(valor);
    }
    public void atualiza(double taxa){
        this.saldo += this.saldo * taxa;
    }
    
    public double getSaldo(){
        return this.limite+this.saldo;
    }        
    public int getConta(){
        return this.numero;
    }
     public double getLimite(double limite){
        return this.limite;
    }
    public String getDono(){
        return this.nome;
    }
    
    public void setLimite(double limite){
        this.limite=limite;
    }
    public void setDono (String nome){
        this.nome = nome;
    }
    
}