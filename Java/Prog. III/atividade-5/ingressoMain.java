import javax.swing.*;

public class ingressoMain{
    public static void main(String[] args){
        Ingresso i = new Ingresso();
        VIP v = new VIP();
        //Normal n = new Normal();
        CamaroteSuperior cs = new CamaroteSuperior();
        CamaroteInferior ci = new CamaroteInferior();
        
        i.setValorIngresso(100);
        //v.setValorIngresso(100);
        v.setValorIngresso(i.getValorIngresso());

        int op = Integer.parseInt(JOptionPane.showInputDialog("Escolha o tipo de ingresso\n [1] - Ingresso Normal\n [2] - Ingresso VIP (Acrescimo de 50% no valor)"));
        
        if (op == 1){
            i.imprimirValor(); // Ingresso normal
        }else if (op == 2){           
            int opt = Integer.parseInt(JOptionPane.showInputDialog("Escolha o tipo de ingresso VIP\n [1] - Camarote Superior (Acrescimo de 25% no valor do VIP)\n [2] - Camarote Inferior"));
            if (opt == 1){
                cs.imprimirValorIngresso(); // Superior
            }else if (opt == 2){
                ci.imprimirValorIngresso(); // Inferior
            }
        }
    }
}