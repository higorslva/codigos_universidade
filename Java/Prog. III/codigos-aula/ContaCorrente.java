public class ContaCorrente extends Conta{
    public ContaCorrente(int numero) {
        super(numero);
    }

    @Override
    public void atualiza(double taxa){
        this.saldo += this.saldo *(taxa*2);
    }
    
    public void depositar(double valor){
        if(valor > 0){
            
            this.saldo+=valor-0.10;
        }else{
            System.out.println("Valor invalido");
        }
    }}
