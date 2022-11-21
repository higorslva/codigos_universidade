import javax.swing.*;
import java.io.*;
import java.awt.Dimension;
import java.nio.file.Files;
import java.nio.file.Paths;

public class licenca{
  public void showLicenca() throws IOException{
    try{
      String input = "";
      BufferedReader reader = new BufferedReader(new FileReader("LICENSE"));
      String line = null;
      while ((line = reader.readLine()) != null){
        input += line + "\n";
      }reader.close();
      JTextArea textArea = new JTextArea(input);
      JScrollPane scrollPane = new JScrollPane(textArea);
      textArea.setLineWrap(true);
      textArea.setWrapStyleWord(true);
      scrollPane.setPreferredSize(new Dimension(600,500));
      JOptionPane.showMessageDialog(null, scrollPane, "Licença de software:", JOptionPane.PLAIN_MESSAGE);
    }catch(IOException ex){
      JOptionPane.showMessageDialog(null, " Erro na leitura do arquivo " +ex.getMessage() + "\n\nArquivo não encontrado.\n\n Você pode ver a licença online pelo link: https://www.apache.org/licenses/LICENSE-2.0.txt");
    }
  }
}
