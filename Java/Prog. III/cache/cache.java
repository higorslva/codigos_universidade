import java.util.*;
import java.io.*;
import java.lang.*;
public class cache{
     public static int log2(int Qtd_enderecos)
    {
  
        // calculate log2 N indirectly
        // using log() method
        int result = (int)(Math.log(Qtd_enderecos) / Math.log(2));
  
        return result;
    }
    public static void DecToBin(int bin){ //converte para binário
        int[] binaryNum; // array para armazenar os bits binários
        binaryNum = new int[32];
        int i = 0;
        while (bin > 0) {
            binaryNum[i] = bin % 2;
            bin = bin / 2;
            i++;
        }
        for (int j = i - 1; j >= 0; j--){
            System.out.println(binaryNum[j]);
        }
    }
    
    public static void main (String[] args) throws IOException{
        int Qtd_enderecos = 8;
        int Qtd_bits = log2(Qtd_enderecos);
        int a, b;
        int[] mem_principal;
        mem_principal = new int[Qtd_enderecos];
        int[] mem_cache;
        mem_cache = new int[Qtd_bits];
    
        //System.out.println( "Digite a quantidade de endereços na memória principal na base 2: ";
        //cin >> Qtd_enderecos;
        //Qtd_enderecos = 8;
        
        System.out.println("\n\n");
        System.out.println( "Memória principal de " + Qtd_enderecos + " endereços e ");
        System.out.println( "memória cache de " + Qtd_bits + " endereços" );
    
        System.out.println( "\nMemória Principal:\n" );
        // construção da array e memórias
        for (a = 1; a < Qtd_enderecos; a++){
            DecToBin(a);
            mem_principal[Qtd_enderecos] = a;
        }   
    
        System.out.println( "\nMemória Cache:\n" );
        for (b = 1; b < Qtd_bits; b++){
            DecToBin(b);
            mem_cache[Qtd_bits] = b;
        }
        for (int i = 0; i < Qtd_bits; i++){
            System.out.println( "| ");
        }
    }
}