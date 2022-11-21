import java.nio.file.Files;
import java.nio.file.Paths;
import java.io.*;
import javax.swing.JOptionPane;

public class Arquivo{
    public void criaArquivo(){
        try{
            FileWriter relatorio = new FileWriter("relatorio.txt", true);
            JOptionPane.showMessageDialog(null, "Arquivo criado");
        }catch(IOException ex){
            JOptionPane.showMessageDialog(null, "Não foi possivel criar o relatorio: " +ex.getMessage());
        }
    }

    public void listarDados() throws IOException{
        try{
            var fileName = "relatorio.txt";
            var filePath = Paths.get (fileName);
            byte [] data = Files.readAllBytes (filePath);
            var content = new String (data);
            JOptionPane.showMessageDialog(null, content);
        }catch(IOException ex){
            JOptionPane.showMessageDialog(null, " Erro na leitura do arquivo " +ex.getMessage() + "\n\nArquivo não encontrado. Tente criar um novo\na partir do menu.");
        }
    }

    public void limparDados() throws IOException{
        try{
            PrintWriter writer = new PrintWriter("relatorio.txt");
            writer.print("");
            writer.close();
            JOptionPane.showMessageDialog(null, "Dados em 'relatorio.txt' apagados com sucesso.");
            writer.print("Nenhum dado cadastrado");
        }catch(IOException ex){
            JOptionPane.showMessageDialog(null, "Nao foi possivel limpar o arquivo.\nErro: " +ex.getMessage());
        }
    }

}
