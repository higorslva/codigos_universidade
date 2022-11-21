public class TestaContas {
    public static void main(String[] args) {
        Conta c = new Conta(654321);
        Conta cc = new ContaCorrente(123456);
        Conta cp = new ContaPoupanca(162534);
      
        c.depositar(1000); 
        cc.depositar(1000); 
        cp.depositar(1000);
      
        c.atualiza(0.01);
        cc.atualiza(0.01);
        cp.atualiza(0.01);
        
        try {
        System.out.println("Saldo atual " + c.getSaldo());
        }catch (NullPointerException e) {
          System.out.println("Erro : "+e);
          c = new Conta(123);
          c.depositar(1000);
          System.out.println("Saldo atual " + c.getSaldo());
         }
    
        System.out.println(c.getSaldo());
        System.out.println(cc.getSaldo());
        System.out.println(cp.getSaldo());
    }
}