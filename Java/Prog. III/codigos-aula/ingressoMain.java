import java.util.Scanner;

public class ingressoMain{
    public static void main(String[] args){
        Scanner menu = new Scanner(System.in);
        
        Ingresso i = new Ingresso();
        VIP v = new VIP();
        Normal n = new Normal();
        CamaroteSuperior cs = new CamaroteSuperior();
        CamaroteInferior ci = new CamaroteInferior();
        
        i.setValorIngresso(100);
        v.setValorIngresso(100);
        
        System.out.println("Escolha o tipo de ingresso:");
        System.out.println("[1] - Ingresso normal");
        System.out.println("[2] - Ingresso VIP (Acrescimo de 50% no valor)");
        int op = menu.nextInt();
        
        if (op == 1){
            i.imprimirValor();
        }else if (op == 2){
            System.out.println("Escolha o tipo de ingresso VIP:");
            System.out.println("[1] - Camarote Superior (Acrescimo de 25% do valor do VIP)");
            System.out.println("[2] - Camarote Inferior"); 
            int opt = menu.nextInt();
            
            if (opt == 1){
                cs.imprimirValorIngresso(); // Superior
            }else if (opt == 2){
                ci.ingresso_inferior(); // Inferior
            }
        }
    }
}