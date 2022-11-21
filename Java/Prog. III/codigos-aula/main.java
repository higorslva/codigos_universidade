public class main
{
    public static void main (String [] args){
        //Animal bicho = new Animal();
        
        Tigre t1 = new Tigre();
        Arara a1 = new Arara();
        
        t1.patas=(4);
        t1.nome=("Tigre");
        t1.terrestre = (true);
        t1.setFamilia ("Felidae");
        
        a1.patas=(2);
        a1.nome=("Arara"); 
        a1.setFamilia ("Psittacidae");
        a1.terrestre = false;
        
        System.out.println("Dados patas do tigre: " + t1.patas);
        System.out.println("Dados nome do tigre: " + t1.nome);
        System.out.println("Animal terrestre: " + t1.terrestre);
        System.out.println("Familia: " + t1.getFamilia());
        
        System.out.println("Dados patas da Arara: " + a1.patas);
        System.out.println("Dados nome da arara: " + a1.nome);
        System.out.println("Animal terrestre: " + a1.terrestre);
        System.out.println("Familia: " + a1.getFamilia());
    }
}
