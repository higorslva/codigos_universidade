import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Calculadora extends JFrame implements ActionListener {
    private static final long serialVersionUID = 1L;
    private JTextField display;
    private String operacao = "";
    private double num1 = 0, num2 = 0, resultado = 0;
    
    public Calculadora() {
        super("Calculadora");
        
        // Cria o painel principal
        JPanel painelPrincipal = new JPanel(new BorderLayout());
        add(painelPrincipal);
        
        // Cria o display da calculadora
        display = new JTextField(15);
        display.setEditable(false);
        painelPrincipal.add(display, BorderLayout.NORTH);
        
        // Cria o painel dos botões
        JPanel painelBotoes = new JPanel(new GridLayout(4, 4));
        painelPrincipal.add(painelBotoes, BorderLayout.CENTER);
        
        // Cria os botões de números
        for (int i = 1; i <= 9; i++) {
            JButton botao = new JButton(Integer.toString(i));
            botao.addActionListener(this);
            painelBotoes.add(botao);
        }
        JButton botao0 = new JButton("0");
        botao0.addActionListener(this);
        painelBotoes.add(botao0);
        
        // Cria os botões de operações
        String[] operacoes = {"+", "-", "*", "/"};
        for (String op : operacoes) {
            JButton botao = new JButton(op);
            botao.addActionListener(this);
            painelBotoes.add(botao);
        }
        
        // Cria o botão de igual
        JButton botaoIgual = new JButton("=");
        botaoIgual.addActionListener(this);
        painelBotoes.add(botaoIgual);
        
        // Cria o botão de limpar
        JButton botaoLimpar = new JButton("C");
        botaoLimpar.addActionListener(this);
        painelBotoes.add(botaoLimpar);
        
        // Configurações da janela
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(250, 250);
        setLocationRelativeTo(null);
        setResizable(false);
        setVisible(true);
    }
    
    public void actionPerformed(ActionEvent e) {
        String comando = e.getActionCommand();
        if (comando.matches("\\d")) { // Se o comando é um número
            display.setText(display.getText() + comando);
        } else if (comando.matches("[+\\-*/]")) { // Se o comando é uma operação
            num1 = Double.parseDouble(display.getText());
            operacao = comando;
            display.setText("");
        } else if (comando.equals("=")) { // Se o comando é o igual
            num2 = Double.parseDouble(display.getText());
            switch (operacao) {
                case "+":
                    resultado = num1 + num2;
                    break;
                case "-":
                    resultado = num1 - num2;
                    break;
                case "*":
                    resultado = num1 * num2;
                    break;
                case "/":
                    resultado = num1 / num2;
                    break;
            }
            display.setText(Double.toString(resultado));
        } else if (comando.equals("C")) { // Se o comando é o limpar
            display.setText("");
            num1 = 0;
            num2 = 0;
            operacao = "";
            resultado = 0;
        }
    }
    
    public static void main(String[] args) {
        new Calculadora();
    }
}
