public class Clinica{
    String nome, cnpj;
    Paciente[] paciente;
    int controle;
    
    public Clinica(int quantidade){
        this.controle=0;
        paciente = new Paciente[quantidade];
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