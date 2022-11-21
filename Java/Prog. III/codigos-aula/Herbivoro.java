public class Herbivoro extends Animal
{
    
    private boolean herbivoro;
    private String familia;
    
    public void setHerbivoro(boolean herbivoro){
        this.herbivoro=herbivoro;
    }
    public void setFamilia(String familia){
        this.familia=familia;
    }
    
    
    public boolean getHerbivoro(){
        return this.herbivoro;
    }
    public String getFamilia(){
        return this.familia;
    }
}
