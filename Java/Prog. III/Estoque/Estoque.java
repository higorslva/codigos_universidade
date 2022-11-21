 

import java.util.Scanner;
/**
 *
 * @author Aíla Maciel
 */

public class Estoque {
    Scanner entrada = new Scanner(System.in);
    
    String nomeproduto;
    int unidade;
    
    Estoque(String nomep, int un){
        nomeproduto = nomep;
        unidade = un;
    }
    
    public String toString(){
        String produto = "Nome: ";
        produto += nomeproduto + "\n" + unidade;
        return produto;
    }
    
    public void entradaEstoque(){
        int adicionar;
        
        System.out.println("Insira a quantidade a ser adicionada: ");
        adicionar = entrada.nextInt();       
        unidade = unidade + adicionar;
        
        System.out.println("Entrada concluída!\n");
        System.out.println("Nome: " + nomeproduto);
        System.out.println("Quantidade: " + unidade);
    }
    
    public void saidaEstoque(){
        int remover;
        
        System.out.println("Insira a quantidade a ser retirada: ");
        remover = entrada.nextInt();       
        unidade = unidade - remover;
        
        System.out.println("Saída concluída!\n");
        System.out.println("Nome: " + nomeproduto);
        System.out.println("Quantidade: " + unidade);        
    }
    
    public void mostrarEstoque(){
        System.out.println("Nome: " + nomeproduto);
        System.out.println("Quantidade: " + unidade);
    }
}