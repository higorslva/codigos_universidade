import javax.swing.*;

public class Ingresso{
    double valor_ingresso;
    
    public void setValorIngresso(double valor_ingresso){
        this.valor_ingresso = valor_ingresso;
    }
    
    public double getValorIngresso(){
        return valor_ingresso;
    }
    
    public void imprimirValor(){
        JOptionPane.showInputDialog("Valor do ingresso VIP: R$" + this.valor_ingresso);
    }
}
