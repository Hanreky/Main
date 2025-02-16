
package array;
import java.util.Scanner;
/**
 *
 * @author Caio
 */
public class idades {
    
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("---Programa em Java que calcula o fatorial de um número. \n Digite um número: ");
        int num = scanner.nextInt();
        scanner.nextLine();
        
        int fatorial = 1;
        
        for(int i=1;i<=num;i++){
            fatorial *= i;
        }
        System.out.println("Resultado: "+fatorial);
    }
            
            
}
