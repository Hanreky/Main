package test;

import javax.swing.JOptionPane;
/**
 *
 * @author Caio
 */
public class Test {
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
        
        int qtd = Integer.parseInt(JOptionPane.showInputDialog(
        null, 
                "Digite a quantidade de livros que serão adicionados: ",
                "Quantide",
                JOptionPane.QUESTION_MESSAGE
        ));
        
        String[] titulos = new String[qtd];
        String[] autores = new String[qtd];
        int[] paginas = new int[qtd];
        
        for(int i = 0; i<qtd; i++){
            titulos[i] = JOptionPane.showInputDialog(
            null,
                    "Digite o título do "+ (i+1) + " livro: ",
                    "Título",
                    JOptionPane.QUESTION_MESSAGE
            );
            autores[i] = JOptionPane.showInputDialog(
            null,
                    "Digite o nome do autor de "+ titulos[i],
                    "Autor",
                    JOptionPane.QUESTION_MESSAGE
            );
            paginas[i] = Integer.parseInt(JOptionPane.showInputDialog(
            null, 
                    "Digite a quantidade de páginas de "+titulos[i],
                    "Páginas",
                    JOptionPane.QUESTION_MESSAGE
            ));
            classificar(paginas[i]);
            contagem(paginas[i]);

    }
        int op = 1;
        Object[] ops = {"Estatísticas", "Todos os livros", "Pesquisar"};
        while(op >= 1 && op <= 3){
            op = Integer.parseInt(JOptionPane.showOptionDialog(
            null,
                    "Escolha uma opção: \n1.Estatisticas \n 2.Todos os livros \n 3.Pesquisar",
                    "Opções",
                    JOptionPane.YES_NO_CANCEL_OPTION,
                    ops,
                    ops[0]
            ));
            
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
    
