import java.util.Scanner;
public class Paciente
{
    Paciente[] paciente;
    int controle;
    String nome, sexo;
    String sair = "fim";
    int idade, quantidade;
    double peso, altura;
    int Lista[];
    
    public Paciente(int quantidade){
        this.controle=0;
        paciente = new Paciente[quantidade];
    }
   
    public void cadastro(){
        System.out.println("Nome do paciente: ");
        nome = new Scanner(System.in).next();
        do{
            System.out.println("Nome do paciente: ");
            nome = new Scanner(System.in).next();
            if (nome.equals(sair)){
                return Menu;
            }
            System.out.println("Sexo do paciente");
            System.out.println("[M] Masculino - [F] Feminino - [O] Outro");
            sexo = new Scanner(System.in).next();
            
            System.out.println("Idade do paciente:");
            idade = new Scanner(System.in).nextInt();
            
            System.out.println("Peso do paciente:");
            peso = new Scanner(System.in).nextInt();
            
            System.out.println("Altura do paciente:");
            altura = new Scanner(System.in).nextInt();
        }while(nome!="fim");
        
    }
    
    public void adiciona(Paciente f){
    if(this.controle < paciente.length){
        paciente[this.controle] = f;
        this.controle++;
        }else{
            int novoTamanho = paciente.length + 1;
            Paciente[] newArray = new Paciente[novoTamanho];
            for (int i = 0; i < paciente.length; i++){
                newArray[i] = paciente[i];
            }
            newArray[paciente.length] = f;
            paciente = newArray;
            this.controle++;
        }
    }
}
