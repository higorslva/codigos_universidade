public class Escola{
    Pessoa [] pessoas;
    protected int controle;
    int control=0;
    int somaIdade, maisVelho, m;
    String maisBaixa;
    
    public Escola(int quantidade){
        this.controle=0;
        pessoas = new Pessoa[quantidade];
    }
    
    public void cadastrar (Pessoa f){
        if (this.controle < pessoas.length){
            pessoas[this.controle] = f;
            this.controle++;
        }else{
            int novoTamanho = pessoas.length + 1;
            Pessoa[] novoArray = new Pessoa[novoTamanho];
            
            for (int i =0; i < pessoas.length; i++){
                novoArray[i] = pessoas[i];
            }
            novoArray[pessoas.length] = f;
            pessoas = novoArray;
            this.controle++;
        }
    }
    
    public double mediaIdadeAlunos(){
        for(int i=0; i<controle; i++){
           if(pessoas[i].atributo.equalsIgnoreCase("aluno")){
               somaIdade+=pessoas[i].idade;
               m++;
           }
         }
        if (m == 0){
            return somaIdade;
        }else{
        return somaIdade/m;
        }
    }
    
    public double mediaIdadeProfessores(){
        for(int i=0; i<controle; i++){
           if(pessoas[i].atributo.equalsIgnoreCase("professor")){
               somaIdade+=pessoas[i].idade;
               m++;
           }
         }
        return somaIdade/m;
    }
    
    public double ProfessorMaisVelho(){
        for(int i=0; i<controle; i++){
            if (pessoas[i].atributo.equalsIgnoreCase("professor")){
                if (pessoas[i].idade > control){
                   maisVelho=pessoas[i].idade;
                }
            }
       }
       return maisVelho;
    }
}