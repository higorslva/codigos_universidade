public class Administrativo extends Funcionario{

    private int hora_extra;

    public void informarHorasExtras(int hora_extra){
        this.hora_extra += hora_extra;
    }

    public int getHoraExtra (){
        return this.hora_extra;
    }
    

    public double hollerith(){
        double sf = getSalario() + getHoraExtra()*getSalario()/100;
        return sf;


    }
}
