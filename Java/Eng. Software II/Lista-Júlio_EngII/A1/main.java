import java.awt.Component;
import javax.swing.*;

public class main{
    private static final Component NULL = null;

    public static void main(String[] args){
        aluno a1 = new aluno();
        
        a1.nome = JOptionPane.showInputDialog("Insira o nome do aluno");
        a1.matricula = JOptionPane.showInputDialog("Insira a matrícula de " + a1.nome);
        a1.nota_prova1 = Double.parseDouble(JOptionPane.showInputDialog("Insira a nota da prova 1"));
        a1.nota_prova2 = Double.parseDouble(JOptionPane.showInputDialog("Insira a nota da prova 2"));
        a1.nota_trab = Double.parseDouble(JOptionPane.showInputDialog("Insira a nota do trabalho"));

        //double media;
        double media =  ((a1.nota_prova1*2.5) + (a1.nota_prova2*2.5) + (a1.nota_trab*2))/7;
        double nota_falta = (10 - media);
        JOptionPane.showMessageDialog(NULL, "Média final = " + media);
        JOptionPane.showMessageDialog(NULL, "Aluno precisa de " + nota_falta + " para passar");
        
    }
}