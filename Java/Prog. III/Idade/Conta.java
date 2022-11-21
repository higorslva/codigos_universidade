
public class Conta
{
    int numero;
    String nome;
    double saldo;
    double limite;
    
    public void sacar(double valor)
    {
        this.saldo-=valor;
    }
    public void depositar(double valor)
    {
        this.saldo+=valor;
    }
    public void imprimeDados()
    {
        System.out.println("Usuario: "+this.nome);
    }
    public double getSaldo()
    {
        return saldo;
    }
    public void transfere (double valor, Conta c)
    {
        sacar(valor);
        c.depositar(valor);
    }
}
