import java.util.Scanner;
/**
 *
 * @author Aíla Maciel
 */

//menu OK
//verificação de login OK
//criação do estoque OK
//exibir estoque OK
//entrada de estoque OK
//saida de estoque OK
//mensagens de bem-vindo e até logo OK
//eu escolhi exibir o estoque por unidade. A resma de papel por padrão vem 500 unidades de papel, considerei essa informação para o programa

public class QuestaoProva {

    public static void main(String[] args) {        

        Estoque caneta = new Estoque("Caneta", 120);
        Estoque lapis = new Estoque("Lapis", 24);
        Estoque papel = new Estoque("Papel", 2500);
        Estoque borracha = new Estoque("Borracha", 6);
        
        String login = "unifap";
        String senhacerta = "unifap123";
        String nome;
        String senha;
        int op;
        int opcao;

        do{
            System.out.println("ÁREA DE LOGIN");
            System.out.println("Insira seu usuário: ");
            Scanner entrada = new Scanner(System.in);
            nome = entrada.next();
        
            System.out.println("Insira a senha: ");
            senha = entrada.next();
        
        if(nome.equals(login) && senha.equals(senhacerta)){
            System.out.println("\nSeja bem-vindo ao sistema de estoque!");
            //m.Menu();
            do{    
                System.out.println("\nSistema de estoque UNIFAP");
                System.out.println("Digite a opção desejada");
                System.out.println("1 - Ver estoque");
                System.out.println("2 - Entrada de estoque");
                System.out.println("3 - Saída de estoque");
                System.out.println("4 - Sair do sistema");
                
                op = entrada.nextInt();
        
                switch(op){
                    case 1:
                        System.out.println("\nOpção escolhida: saída de estoque");
                        System.out.println("Qual produto você deseja verificar?");
                        System.out.println("1 - Caneta");
                        System.out.println("2 - Lapis");
                        System.out.println("3 - Papel");
                        System.out.println("4 - Borracha");
        
                        opcao = entrada.nextInt();
        
                        switch(opcao){
                            case 1:
                                caneta.mostrarEstoque();
                            break;
            
                            case 2:
                                lapis.mostrarEstoque();
                            break;
            
                            case 3:
                                papel.mostrarEstoque();
                            break;
            
                            case 4:
                                borracha.mostrarEstoque();
                            break;
            
                            default:
                                System.out.println("Opção inválida\n");
                            break;
                        }                    
                    break;
            
                    case 2:
                        System.out.println("\nOpção escolhida: entrada de estoque");
                        System.out.println("Qual produto você deseja modificar?");
                        System.out.println("1 - Caneta");
                        System.out.println("2 - Lapis");
                        System.out.println("3 - Papel");
                        System.out.println("4 - Borracha");
        
                        opcao = entrada.nextInt();
        
                        switch(opcao){
                            case 1:
                                caneta.entradaEstoque();
                            break;
            
                            case 2:
                                lapis.entradaEstoque();
                            break;
            
                            case 3:
                                papel.entradaEstoque();
                            break;
            
                            case 4:
                                borracha.entradaEstoque();
                            break;
            
                            default:
                                System.out.println("Opção inválida\n");
                            break;
                        }
                    break;
                
                    case 3:
                        System.out.println("\nOpção escolhida: saída de estoque");
                        System.out.println("Qual produto você deseja modificar?");
                        System.out.println("1 - Caneta");
                        System.out.println("2 - Lapis");
                        System.out.println("3 - Papel");
                        System.out.println("4 - Borracha");
        
                        opcao = entrada.nextInt();
        
                        switch(opcao){
                            case 1:
                                caneta.saidaEstoque();
                            break;
            
                            case 2:
                                lapis.saidaEstoque();
                            break;
            
                            case 3:
                                papel.saidaEstoque();
                            break;
            
                            case 4:
                                borracha.saidaEstoque();
                            break;
            
                            default:
                                System.out.println("Opção inválida");
                            break;
                        }                        
                    break;
            
                    case 4:
                        System.out.println("\nAté logo!");
                        System.exit(0);
                    break;
                
                    default:
                        System.out.println("Opção inválida!\n");
                    break;
                }
            }while(op != 4);
        } else{
            System.out.println("O usuário ou senha estão incorretos. Tente novamente.\n");
        }
        }while(!nome.equals(login) || !senha.equals(senhacerta));
    }           
}