import javax.swing.JOptionPane;
public class Principal
{
    public static void main (String[] args){
        Clinica c1 = new Clinica(1);
        Paciente p1 = new Paciente();
        
           
        do{
            p1.nome=JOptionPane.showInputDialog("Nome:");
                
            if(p1.nome.equalsIgnoreCase("fim")){
                JOptionPane.showMessageDialog(null,"Quantidade de Pacientes: "+c1.controle);
                JOptionPane.showMessageDialog(null,"A média de idades de homens: "+c1.mediaIdadeH());
                JOptionPane.showMessageDialog(null,"O homem mais velho tem "+c1.maisVelho());
                JOptionPane.showMessageDialog(null,"A mulher mais baixa é a: "+c1.maisBaixa());
                System.exit(0);
            }else{
                p1.sexo=JOptionPane.showInputDialog("Sexo:");
                p1.idade=Integer.parseInt(JOptionPane.showInputDialog("Idade:"));
                p1.peso=Double.parseDouble(JOptionPane.showInputDialog("Peso:"));
                p1.altura=Double.parseDouble(JOptionPane.showInputDialog("Altura:"));
                c1.cadastrar(p1);
                
                
                p1 = new Paciente();
                p1.nome ="";
            }     
        }while(!p1.nome.equalsIgnoreCase("fim"));     
    }
}
