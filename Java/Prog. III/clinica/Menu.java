import java.util.Scanner;
public class Menu{
    public static void main (String[] args){
        int opt;
        int Lista[];
        System.out.println("Hospital CC2019 - Aqui nao tem salvaçao");
        System.out.println("Selecione uma opçao:");
        //Construçao do menu
        System.out.println("[1] Cadastrar paciente");
        System.out.println("[2] Exibir relatorio de pacientes cadastrados");
        System.out.println("[3] Sobre");
        opt = new Scanner(System.in).nextInt();
        if(opt == 1){
            Paciente paciente = new Paciente(1);
            paciente.cadastro();
            //Clinica clinica = new clinica();
            //Clinica.adiciona();
           
        }else if (opt == 2){
            System.out.println("Pacientes cadastrados:");
            //System.out.println(quantidade);
        }
    }
}