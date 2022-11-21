import java.util.*;
import java.io.*;
public class cache{

    public int DecToBin(int bin){ //converte para binário
        int[] binaryNum; // array para armazenar os bits binários
        binaryNum = new int[8];
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
        int Qtd_enderecos, Qtd_bits, a, b;
        int[] mem_principal;
        mem_principal = new int[Qtd_enderecos];
        int[] mem_cache;
        mem_cache = new int[Qtd_bits];
    
        //System.out.println( "Digite a quantidade de endereços na memória principal na base 2: ";
        //cin >> Qtd_enderecos;
        Qtd_enderecos = 8;
        int base = 2;
        Qtd_bits = Math.log(Qtd_enderecos)/Math.log(base);
        System.out.println("\n\n");
        System.out.println( "Memória principal de " + Qtd_enderecos + " endereços e ");
        System.out.println( "memória cache de " + Qtd_bits + " endereços" );
    
        System.out.println( "\nMemória Principal:\n" );
        // construção da array e memórias
        for (a = 1; a <= Qtd_enderecos; a++){
            System.out.println( "| " + a + " | ");
            DecToBin(a);
            System.out.println("\n");
            mem_principal[Qtd_enderecos] = a;
        }   
    
        System.out.println( "\nMemória Cache:\n" );
        for (b = 1; b <= Qtd_bits; b++){
            System.out.println( "| " + b + " | ");
            DecToBin(b);
            System.out.println("\n");
            mem_cache[Qtd_bits] = b;
        }
        for (int i = 0; i < Qtd_bits; i++){
            System.out.println( "| ");
        }
    }
}