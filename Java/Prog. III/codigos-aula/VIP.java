public class VIP extends Ingresso{
        
    @Override
    public void setValorIngresso(double valor_ingresso){
        this.valor_ingresso = valor_ingresso*1.50;
    }
    
    @Override
    public double getValorIngresso(){
        return this.valor_ingresso;
    }
    
    public void imprimirValor(){
        System.out.println("Ingresso valor: " + valor_ingresso);
    }
    
}
