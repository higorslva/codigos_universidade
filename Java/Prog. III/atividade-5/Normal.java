import javax.swing.*;

public class Normal extends Ingresso{
    public void imprimirValor(){
        JOptionPane.showInputDialog("Valor do ingresso normal: R$" + getValorIngresso());
    }
}
