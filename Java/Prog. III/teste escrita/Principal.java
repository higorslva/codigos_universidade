import java.io.IOException;

public class Principal {
    public static void main(String args[]) throws IOException {    
        String path = "/home/$USER/file.txt";

        ManipuladorArquivo.escritor(path);
	ManipuladorArquivo.leitor(path);
	}

}
