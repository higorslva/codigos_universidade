public class Ingresso{
    protected double valor_ingresso;
    
    public void setValorIngresso(double valor_ingresso){
        this.valor_ingresso = valor_ingresso;
    }
    
    public double getValorIngresso(){
        return valor_ingresso;
    }
    
    public void imprimirValor(){
        System.out.println("Ingresso valor: " + getValorIngresso());
    }
}
