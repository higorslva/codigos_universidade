//@higorslva

import javax.swing.JOptionPane;
public class Produto{
    
    private String nome;
    private double precoCusto;
    private double precoVenda;
    private double margemLucro;
    private double margemLucroPorcentagem;
    
    public void setNome(String nome){
        this.nome = nome;
    }
    public void setPrecoCusto(double precoCusto){
        this.precoCusto = precoCusto;
    }
    public void setPrecoVenda(double precoVenda){
        this.precoVenda = precoVenda;
        if (this.precoVenda < this.precoCusto){
            JOptionPane.showMessageDialog(null, "Atenção: O preço de venda é inferior ao preço de compra.");
        }
    }
    public void setMargemLucro (double margemLucro){
        this.margemLucro = margemLucro;
    }
    public void setMargemLucroPorcentagem(double margemLucroPorcentagem){
        double lucro = (this.precoVenda - this.precoCusto);
        this.margemLucroPorcentagem = lucro/this.precoVenda*100;
    }

    public String getNome(){
        return this.nome;
    } 
    public double getPrecoCusto(){
        return this.precoCusto;
    }
    public double getPrecoVenda(){
        return this.precoVenda;
    }
    public double getMargemLucro(){
        return this.margemLucro;
    }
    public double getMargemLucroPorcentagem(){
        return this.margemLucroPorcentagem;
    }

    public void calcularMargemLucro(){
        double lucro = (this.precoVenda - this.precoCusto);
        margemLucro = (lucro/this.precoVenda) * 100;
        JOptionPane.showMessageDialog(null, "Margem de lucro em monetario: R$"+lucro);
        JOptionPane.showMessageDialog(null,"Margem de lucro em porcentagem: "+margemLucro+"%");
    }
}