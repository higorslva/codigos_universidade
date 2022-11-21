import javax.swing.*;

public class calc
{
    public static void main (String args[]){
        int peso;
        peso = Integer.parseInt(JOptionPane.showInputDialog("Digite seu peso: "));
        JOptionPane.showMessageDialog(null, "Seu peso é: " + peso);
    }
}
