public class Programa
{
    public static void main(String[] args)
    {
        Conta x = new Conta();
        Conta y = new Conta();
        
        x.saldo=2000;
        y.saldo = 0;
        
        System.out.println("Saldo de x: "+x.saldo);
        System.out.println("Saldo de y: "+y.saldo);
        
        x.transfere(1000,y);
        System.out.println("Saldo de x: "+x.saldo);
        System.out.println("Saldo de y: "+y.saldo);
    }
}
