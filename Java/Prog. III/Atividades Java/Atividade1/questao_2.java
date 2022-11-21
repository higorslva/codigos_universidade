import java.util.*;
public class questao_2 {
    public static void main (String[] args){
        String[] array = {"abc", "2", "10", "0",};
        List<String> list = Arrays.asList(array);
        Collections.sort(list);
        System.out.println(Arrays.toString(array));
    }
}