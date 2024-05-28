import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class CalculadoraMedia extends JFrame implements ActionListener {
    private final JTextField textField1;
    private final JTextField textField2;
    private final JTextField textField3;
    private final JButton calcularButton;

    public CalculadoraMedia() {
        super("Calculadora de Média");

        // Define o layout da janela
        setLayout(new GridLayout(4, 2));

        // Adiciona os campos de texto e o botão na janela
        add(new JLabel("Digite o primeiro número:"));
        textField1 = new JTextField(10);
        add(textField1);

        add(new JLabel("Digite o segundo número:"));
        textField2 = new JTextField(10);
        add(textField2);

        add(new JLabel("Digite o terceiro número:"));
        textField3 = new JTextField(10);
        add(textField3);

        calcularButton = new JButton("Calcular");
        calcularButton.addActionListener(this);
        add(calcularButton);

        setSize(400, 150);
        setVisible(true);
    }

    public static void main(String[] args) {
        new CalculadoraMedia();
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        // Lê os valores dos campos de texto
        double num1 = Double.parseDouble(textField1.getText());
        double num2 = Double.parseDouble(textField2.getText());
        double num3 = Double.parseDouble(textField3.getText());

        // Calcula a média dos valores
        double media = (num1 + num2 + num3) / 3;

        // Exibe a média em um diálogo de mensagem
        JOptionPane.showMessageDialog(this, "A média é: " + media);
    }
}
