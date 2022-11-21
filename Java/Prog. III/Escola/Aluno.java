public class Aluno extends Pessoa
{
    protected String matricula;
    
    public void setMatricula (String matricula){
        this.matricula = matricula;
    }
    
    public String getMatricula (){
        return this.matricula;
    }
}
