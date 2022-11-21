public class VIP extends Ingresso{
    
    @Override
    public double getValorIngresso(){ 
        return this.valor_ingresso*1.50;
    }
    
}
