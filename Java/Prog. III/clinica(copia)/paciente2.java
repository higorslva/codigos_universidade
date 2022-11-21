public class paciente2
{
    String nome, sexo;
    int idade;
    double peso, altura;
    
    public void setNome(String n){
        nome=n;
    }
    public String getNome(){
        return nome;
    }
    public void setIdade(int i){
        idade=i;
    }
    public int getIdade(){
        return idade;
    }
    public void setAltura(float a){
        altura=a;
    }
    public double getAltura(){
        return altura;
    }
    public void setSexo(String s){
        sexo = s;
    }
    public String getSexo(){
        return sexo;
    }
}