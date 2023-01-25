import java.io.*;
import javax.swing.*;

public class principal{
    public static void main (String[] args) throws IOException{
        //int opcao;

        Arquivo arq = new Arquivo();
        Escola e1 = new Escola(10);
        Pessoa p1 = new Pessoa();
        Aluno a1 = new Aluno();
        Professor pr1 = new Professor();
        Servidor s1 = new Servidor();

        do {
                Object[] opcao = { "1 - Criar arquivo relatorio.txt",
                "(Apenas para a primeira utilizaçao)",
                "2 - Exibir lista de cadastrados",
                "3 - Cadastrar dados",
                "4 - Limpar dados cadastrados",
                "5 - Sair"};

                int n = JOptionPane.showOptionDialog(null,//parent container of JOptionPane
                "Bem vindo :)",
                "Cadastro escolar",
                JOptionPane.YES_NO_CANCEL_OPTION,
                JOptionPane.QUESTION_MESSAGE,
                null,//do not use a custom Icon
                opcao,//the titles of buttons
                opcao[2]);//default button title

            switch (opcao){
                case 1:
                    arq.criaArquivo();
                    break;
                case 2:
                    arq.listarDados();
                    break;
                case 3:
                    try{
                        do{
                            FileWriter relatorio = new FileWriter("relatorio.txt", true);
                            relatorio.write("--------------------------------");
                            relatorio.write("\n");
                            p1.nome = JOptionPane.showInputDialog("Dica: Digite 'fim' para voltar ao menu\nNome: ");
                            relatorio.write("Nome: " + p1.nome);
                            relatorio.write("\n");
                            if(p1.nome.equalsIgnoreCase("fim")){
                                break;
                            }else{
                                //p1.sexo = JOptionPane.showInputDialog("Sexo\n[M] - [F]:" );
                                String[] genero = {"Masculino", "Feminino", "Não-binarie", "Outros", "Nao informar"};
                                Object searchType = JOptionPane.showInputDialog(null, "Selecione: ", "Gênero",
                                JOptionPane.QUESTION_MESSAGE, null, genero, genero[0]);
                                relatorio.write("Genero: " + searchType);
                                relatorio.write("\n");

                                p1.idade = Integer.parseInt(JOptionPane.showInputDialog("Idade: "));
                                relatorio.write("Idade: " + p1.idade);
                                relatorio.write("\n");

                                p1.cpf = JOptionPane.showInputDialog("CPF: ");
                                relatorio.write("CPF: " + p1.cpf);
                                relatorio.write("\n");
                              

                                //p1.atributo = JOptionPane.showInputDialog("Função (Aluno, Professor, ou Servidor)");
                                String[] atributo = {"Aluno(a)", "Professor(a)", "Servidor(a)"};
                                Object at = JOptionPane.showInputDialog(null, "Selecione: ", "Atributo",
                                JOptionPane.QUESTION_MESSAGE, null, atributo, atributo[0]);
                                relatorio.write("Atributo: " + at);
                                relatorio.write("\n");
                                p1.atributo = String.valueOf(at);
                                if(p1.atributo.equalsIgnoreCase("aluno(a)")){
                                    //atributos do aluno
                                    a1.matricula = JOptionPane.showInputDialog("Nº de matricula: ");
                                    relatorio.write("Nº de Matricula: " + a1.matricula);
                                    relatorio.write("\n");
                                }else if(p1.atributo.equalsIgnoreCase("professor(a)")){
                                    //atributos do professor
                                    //pr1.especialidade = JOptionPane.showInputDialog("Especialidade (Materia) do(a) professor(a):");
                                    String[] especialidade = {"Biologia", "Espanhol", "Filosofia", "Física", "Francês", "Geografia", "História",
                                                              "Inglês", "Matemática", "Português/Literatura", "Química", "Sociologia"};
                                    Object espec = JOptionPane.showInputDialog(null, "Selecione: ", "Especialidade",
                                    JOptionPane.QUESTION_MESSAGE, null, especialidade, especialidade[0]);
                                    relatorio.write("Especialidade: " + espec);
                                    relatorio.write("\n");

                                    pr1.salario = Double.parseDouble(JOptionPane.showInputDialog("Salario: "));
                                    relatorio.write("Salario: R$" + pr1.salario);
                                    relatorio.write("\n");

                                }else if(p1.atributo.equalsIgnoreCase("servidor(a)")){
                                    //atributos do servidor
                                    //s1.funcao = JOptionPane.showInputDialog("Função do servidor (Secretario(a), psicologo(a), etc");
                                    String[] funcao = {"Diretor", "Coordenador(a) Pedagógico", "Vigia", "Secretário(a)",
                                                              "Inspetor(a)", "Merendeiro(a)", "Auxiliar de limpeza"};
                                    Object func = JOptionPane.showInputDialog(null, null, "Funçao: ",
                                    JOptionPane.QUESTION_MESSAGE, null, funcao, funcao[0]);
                                    relatorio.write("Funçao: " + func);
                                    relatorio.write("\n");

                                    s1.salario = Double.parseDouble(JOptionPane.showInputDialog("Salário: "));
                                    relatorio.write("Salario: R$" + s1.salario);
                                    relatorio.write("\n");

                                }else{
                                    JOptionPane.showMessageDialog(null, "Erro inesperado!");
                                }

                                e1.cadastrar(p1);
                                p1 = new Pessoa();
                                p1.nome = "";

                                relatorio.flush();
                            }
                    }while(!p1.nome.equalsIgnoreCase("fim"));
                    break;
                }catch(IOException ex){
                    JOptionPane.showMessageDialog(null, "Erro ao gravar no arquivo: "+ex.getMessage());
                }
                case 4:
                    arq.limparDados();
                    break;
                case 5:
                    System.exit(0);
                    break;
            }
        }while (opcao != 5);
    }
}
