public abstract class Abstracao{
    public Bridge Ponte { 
        get; 
        set; 
    }public virtual void Operacao()    {
        Console.WriteLine("Ponte:Operacao()";
        Ponte.OperacaoImplementada();
    }
}

public class AbstracaoExtendida : Abstracao{
    public override void Operacao()
    {
        Console.WriteLine("AbstracaoExtendida:Operacao()";
        Ponte.OperacaoImplementada();
    }
}

public interface Bridge{
    void OperacaoImplementada();
}

public class ImplementacaoA : Bridge
{
    public void OperacaoImplementada()
    {
        Console.WriteLine("ImplementacaoA:OperacaoImplementada()");
    }
}

public class ImplementacaoB : Bridge
{
    public void OperacaoImplementada()
    {
        Console.WriteLine("ImplementacaoB:OperacaoImplementada()");
    }
}
view raw