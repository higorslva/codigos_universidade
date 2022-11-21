public class Empresa{
    private String cnpj;
    Funcionario [] funcionarios;
    private int controle;
    
    public Empresa(int quantidade){
        this.controle=0;
        funcionarios = new Funcionario[quantidade];
    }
    
    public void adiciona (Funcionario f){
        if (this.controle < funcionarios.length){
            funcionarios[this.controle] = f;
            this.controle++;
        }else{
            int novoTamanho = funcionarios.length + 1;
            Funcionario[] novoArray = new Funcionario[novoTamanho];
            
            for (int i =0; i < funcionarios.length; i++){
                novoArray[i] = funcionarios[i];
            }
            novoArray[funcionarios.length] = f;
            funcionarios = novoArray;
            this.controle++;
        }
    }

}