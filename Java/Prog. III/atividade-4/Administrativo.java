public class Administrativo extends Funcionario{
    
    private int horas_extras;
    
    public void setHorasExtras(int HorasExtras){
        this.horas_extras = HorasExtras;
    }

    public int getHorasExtras(){
        return this.horas_extras;
    }
    
    public void informarHorasExtras(){
        System.out.println("Horas extras trabalhadas: " + this.horas_extras);
    }
   
    public void comissao(){
        System.out.println("Comissão: " + getSalarioBase()*0.01*this.horas_extras);
    }
    public void salarioTotal(){
        double salarioTotal = getSalarioBase()+(getSalarioBase()*0.01*this.horas_extras);
        System.out.println("Salario total: " + salarioTotal);
    }

    

}
