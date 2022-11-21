import javax.swing.JOptionPane;
public class Clinica
{
    String nome, cnpj;
   Paciente[] pacientes;
   int control=0;
   int controle;
   int somaIdade, maisVelho, m;
   String maisBaixa;
   public Clinica(int quantidade){
       this.controle=0;
       pacientes = new Paciente[quantidade];
   }
   
   public void cadastrar(Paciente p){
        if(this.controle < pacientes.length){
        pacientes[this.controle]= p;
        this.controle++;
        }else{
            int novoTamanho = pacientes.length + 1;
            Paciente[] novoArray = new Paciente[novoTamanho];
            
            for (int i = 0; i < pacientes.length; i++) {
                novoArray[i] = pacientes[i];
            }
            novoArray[pacientes.length] = p;
            pacientes = novoArray;
            this.controle++;
        }
    }
    
   public double mediaIdadeH(){
       for(int i=0; i<controle; i++){
          if(pacientes[i].sexo.equalsIgnoreCase("M")){
              somaIdade+=pacientes[i].idade;
              m++;
          }
        }
       return somaIdade/m;
   }
   
   public double maisVelho(){

       for(int i=0; i<controle; i++){
           if (pacientes[i].idade > control){
               maisVelho=pacientes[i].idade;
           }
       }
       return maisVelho;
   }
   public String maisBaixa(){
       for (int i=0; i<controle; i++){
            if(pacientes[i].sexo.equalsIgnoreCase("F")){
                if(pacientes[i].altura < control){
                maisBaixa=pacientes[i].nome;
                }else{
                    JOptionPane.showMessageDialog(null,"Não há mulheres cadastradas!");
                }
           }
       }
       return maisBaixa;
   }
}