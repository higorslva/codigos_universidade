public class Main
{
    public static void main (String[] args){
        Vendedores v = new Vendedores();
        Administrativo a = new Administrativo();
        
        v.setSalario(1000);
        a.setSalario(1000);
        v.setTotalVendas();
        v.hollerith();
        a.informarHorasExtras(10);
        a.hollerith();
    }
    
}
