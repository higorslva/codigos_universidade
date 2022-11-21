import javax.swing.JDialog;
import javax.swing.*;
import java.util.*;
import java.awt.Dimension;
import java.io.*;


public class print1
{
    public static void main(String [] args) throws IOException
    {
        String input = "";

        BufferedReader reader = new BufferedReader(new FileReader("wordlist.txt"));
        String line = null;
        while ((line = reader.readLine()) != null) {

            input += line + "\n";
        }
        reader.close();

        JTextArea textArea = new JTextArea(input);
        JScrollPane scrollPane = new JScrollPane(textArea);
        textArea.setLineWrap(true);
        textArea.setWrapStyleWord(true);
        scrollPane.setPreferredSize(new Dimension ( 200, 400 ) ); //whatever size you want
        JOptionPane.showMessageDialog(null,
        scrollPane,
        "text file contents:",
        JOptionPane.PLAIN_MESSAGE);

    }
}
