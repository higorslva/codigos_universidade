import java.util.Scanner;
import java.util.Calendar;
import java.util.GregorianCalendar; 

 public class Pessoa{
    String nome;
    int  dia, mes, ano, idade;
    Calendar cal = GregorianCalendar.getInstance();
    int diaAtual = cal.get(Calendar.DAY_OF_MONTH);
    int mesAtual = cal.get(Calendar.MONTH);
    int anoAtual = cal.get(Calendar.YEAR);
    public void calculaIdade(){
        System.out.println("Dia em que voce nasceu");
        dia = new Scanner(System.in).nextInt(); 
        
        if ((dia<=0) && (dia>31)){
            System.out.println("Dia invalido");
        }else{
            System.out.println("Mes em que voce nasceu:" );
            mes = new Scanner(System.in).nextInt(); 
            if((mes<=0) && (mes>12)){
                System.out.println("Mes invalido");
            }else{
                System.out.println("Ano que voce nasceu: ");
                ano = new Scanner(System.in).nextInt(); 
                if((ano<=0) && (ano > anoAtual)){
                    System.out.println("Ano invalido");
                }else{
                    int Nasc = ano*365;
                        Nasc = Nasc+(mes*31);
                        Nasc = Nasc+dia;
                    int Atual = anoAtual*365;
                        Atual = Atual+(mesAtual*31);
                        Atual = Atual+diaAtual;
                        
                        System.out.println("Você tem "+(Atual-Nasc)+" dias ou "+((Atual-Nasc)/31)+" meses ou "+((Atual-Nasc)/365)+" anos.");
                }
            }
        }
    }
    
    public String informaNome(){
        System.out.print("Digite seu nome: ");
        Scanner in = new Scanner(System.in); 
        nome = in.nextLine();
        System.out.println("Seu nome e: " +nome);
        return "Sucess";
    }
    public int informaIdade(){
        return idade;
    }
    public int AlbertEinstein(){
        int aeDia = 14;
        int aeMes = 3;
        int aeAno = 1879;
        
        int Nasc = aeAno*365;
            Nasc = Nasc+(aeMes*31);
            Nasc = Nasc+aeDia;
        int Atual = anoAtual*365;
            Atual = Atual+(mesAtual*31);
            Atual = Atual+diaAtual;
            System.out.println("Se vivo, Albert Einstein teria "+(Atual-Nasc)+" dias ou "+((Atual-Nasc)/31)+" meses ou "+((Atual-Nasc)/365)+" anos.");
            return 0;
    }
    public int IsaacNewton(){
        int inDia = 4;
        int inMes = 1;
        int inAno = 1643;
        
        int Nasc = inAno*365;
            Nasc = Nasc+(inMes*31);
            Nasc = Nasc+inDia;
        int Atual = anoAtual*365;
            Atual = Atual+(mesAtual*31);
            Atual = Atual+diaAtual;
            System.out.println("Se vivo, Isaac Newton teria "+(Atual-Nasc)+" dias ou "+((Atual-Nasc)/31)+" meses ou "+((Atual-Nasc)/365)+" anos.");
            return 0;
    }
 }
