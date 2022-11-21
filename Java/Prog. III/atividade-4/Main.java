public class Main
{
    public static void main (String[] args){
        //Funcionario f1 = new Funcionario();
        Vendedores v1 = new Vendedores();
        Administrativo a1 = new Administrativo();
        
        v1.setNome("Higor");
        v1.setRG(123456);
        v1.setSalarioBase(1000);
        v1.setVendas(30);
        
        a1.setNome("Maria");
        a1.setRG(654321);
        a1.setSalarioBase(2000);
        a1.setHorasExtras(40);
        
        System.out.println("Vendedor: " + v1.getNome());
        System.out.println("Salario: " + v1.getSalarioBase());
        
        v1.informarVenda();
        v1.salarioTotal();

        System.out.println("-------------------");
        
        System.out.println("Administradora: " + a1.getNome());
        System.out.println("Salario: " + a1.getSalarioBase());
        
        a1.informarHorasExtras();
        a1.comissao();
        a1.salarioTotal();
    }
    
}
