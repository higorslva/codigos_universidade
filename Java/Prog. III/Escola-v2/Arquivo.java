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
            JOptionPane.showMessageDialog(null, "Nao foi possivel ler o relatorio: " +ex.getMessage());
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
    
    /* codigos antigos para testes
     
     
        public void listarArquivo_first(){
            File relatorio = new File("relatorio.txt");
            try(FileReader fr = new FileReader(relatorio)){
                int c = fr.read();
                while(c!= -1){
                    JOptionPane.showInputDialog((char)c);
                    c = fr.read();
                }
            }catch(IOException ex){} 
        }
              
        public void listarArquivo_old() throws IOException{
            BufferedReader br = new BufferedReader(new FileReader("relatorio.txt"));
            var fileName = "relatorio.txt";
            String File = null;
            while((File = br.readLine()) != null){
                JOptionPane.showMessageDialog(null, File);
            }
            br.close();
        }*/
}