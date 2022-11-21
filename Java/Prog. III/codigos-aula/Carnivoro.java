public class Carnivoro extends Animal
{
    private boolean carnivoro;
    private String familia;
    
    public void setCarnivoro(boolean carnivoro){
        this.carnivoro=carnivoro;
    }
    public void setFamilia(String familia){
        this.familia=familia;
    }
    
    
    public boolean getCarnivoro(){
        return this.carnivoro;
    }
    
    public String getFamilia(){
        return this.familia;
    }
}
