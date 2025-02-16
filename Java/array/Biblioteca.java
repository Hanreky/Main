package array;
import java.util.Scanner;

/**
 *
 * @author Caio
 */
public class Biblioteca {
    private static int curto = 0;
    private static int medio = 0;
    private static int longo = 0;
    private static int total = 0;
    
    public static String classificar(int paginas) {
    if (paginas < 100) {
        return "Curto";
    } else if (paginas >= 100 && paginas <= 300) {
        return "Medio";
    } else if (paginas > 300) {
        return "Longo";
    }
    return "";
}
    public static int contagem(int paginas){
    if (paginas < 100) {
         curto++;
    } else if (paginas >= 100 && paginas <= 300) {
        medio++;
    } else if (paginas > 300) {
        longo++;
    }
    return total++;
    }
    
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        
        System.out.println("Digite a quantidade de livros que serao adicionados: ");
        int qtd = read.nextInt();
        read.nextLine();
        
        String[] titulos = new String[qtd];
        String[] autores = new String[qtd];
        int[] paginas = new int[qtd];
        
        for(int i = 0; i<qtd; i++){
            System.out.println("Digite o titulo do "+ (i+1) + " livro: ");
            titulos[i] = read.nextLine();        
            System.out.printf("Digite o nome do autor de %s: ", titulos[i]);
            autores[i] = read.nextLine();
            System.out.printf("Digite a quantidade de paginas de %s: ", titulos[i]);
            paginas[i] = read.nextInt();   
            read.nextLine();
            classificar(paginas[i]);
            contagem(paginas[i]);

    }
        int op = 1;
        while(op >= 1 && op <= 3){
            System.out.println("\n------Opcoes------\n 1.Estatisticas \n 2.Todos os livros \n 3.Pesquisar");
            op = read.nextInt();
            
            if(op == 1){
                System.out.printf(" Total de livros: %d \n Total de livros curtos: %d \n Total de medios: %d \n Total de longos: %d\n", total, curto, medio, longo);
            }
            else if(op == 2){
                for(int i=0;i<qtd;i++){
                    System.out.printf("\n---%s---\nAutor: %s \nQuantidade de paginas: %d \nLivro "+ classificar(paginas[i]), titulos[i], autores[i], paginas[i]);
                }
            }
            else if(op == 3){
                System.out.println("Pesquisar por titulo, autor ou classificacao? ");
                String pesquisa = read.next();
                read.nextLine();
                
                if(pesquisa.equalsIgnoreCase("titulo")){
                    System.out.println("Digite o titulo para pesquisar: ");
                    String titulo = read.nextLine();
                    for(int i=0;i<qtd;i++){
                        if(titulos[i].equalsIgnoreCase(titulo)){
                        System.out.printf("\n---%s---\nAutor: %s \nQuantidade de paginas: %d \nLivro "+ classificar(paginas[i]), titulos[i], autores[i], paginas[i]);
                        }
                    }
                }
                else if(pesquisa.equalsIgnoreCase("autor")){
                    System.out.println("Digite o nome do autor: ");
                    String autor = read.nextLine();
                    for(int i=0;i<qtd;i++){
                        if(autor.equalsIgnoreCase(autores[i])){
                            System.out.printf("\n---%s---\nAutor: %s \nQuantidade de paginas: %d \nLivro "+ classificar(paginas[i]), titulos[i], autores[i], paginas[i]);
                        }
                    }
                }
                else if(pesquisa.equalsIgnoreCase("classificacao")){
                    System.out.println("Digite a cassificacao: ");
                    String classificacao = read.nextLine();
                    for(int i=0;i<qtd;i++){
                        if(classificacao.equalsIgnoreCase(classificar(paginas[i]))){
                            System.out.printf("\n---%s---\nAutor: %s \nQuantidade de paginas: %d \nLivro "+ classificar(paginas[i]), titulos[i], autores[i], paginas[i]);
                        }
                    }
                }
            }
        }
    }
    }
    

