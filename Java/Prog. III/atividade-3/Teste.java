//@higorslva

import javax.swing.JOptionPane;

public class Teste{
    public static void main (String[] args){
        Produto p1 = new Produto ();
       
        p1.setNome(JOptionPane.showInputDialog("Produto para cadastro:"));
        p1.setPrecoCusto(Double.parseDouble(JOptionPane.showInputDialog("Insira o preço de custo:")));
        p1.setPrecoVenda(Double.parseDouble(JOptionPane.showInputDialog("Insira o preço de venda:")));
        
        
        JOptionPane.showMessageDialog(null,"Produto cadastrado: "+p1.getNome());
        JOptionPane.showMessageDialog(null,"Preço de custo: "+p1.getPrecoCusto());
        JOptionPane.showMessageDialog(null, "Preco de venda: "+p1.getPrecoVenda());
        
        p1.calcularMargemLucro();
    }
}