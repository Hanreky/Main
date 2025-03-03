package biblioteca2; //sistema basico de bibliotea com joptionpane

import javax.swing.JOptionPane;
/**
 *
 * @author Caio
 */
public class Biblioteca2 {
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
    total++;
    return total;
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
        int op = 0;
        int pesquisa = 0;
        Object[] ops = {"Estatísticas", "Todos os livros", "Pesquisar"};
        Object[] opps = {"Titulo", "Autor", "Classificação"};
        Object[] classificacoes = {"Curto", "Medio", "Longo"};
        while (true) {
            op = JOptionPane.showOptionDialog(
                    null,
                    "Escolha uma opção: \n1. Estatísticas \n2. Todos os livros \n3. Pesquisar",
                    "Opções",
                    JOptionPane.YES_NO_CANCEL_OPTION,
                    JOptionPane.WARNING_MESSAGE,
                    null, 
                    ops,
                    ops[0]
            );
            
            if (op == JOptionPane.CLOSED_OPTION) {
                break;
            }
                                  
            if(op == 0){
                String mensagem = String.format(" Total de livros: %d \n Total de livros curtos: %d \n Total de medios: %d \n Total de longos: %d\n", total, curto, medio, longo);
                JOptionPane.showMessageDialog(
                        null,
                        mensagem,
                        "Estatísticas",
                        JOptionPane.INFORMATION_MESSAGE
                        );
            }
            else if(op == 1){
                for(int i=0;i<qtd;i++){
                   String mensagem = String.format("\n---%s---\nAutor: %s \nQuantidade de paginas: %d \nLivro "+ classificar(paginas[i]), titulos[i], autores[i], paginas[i]);
                    JOptionPane.showMessageDialog(null, 
                            mensagem, 
                            "Livros",
                            JOptionPane.INFORMATION_MESSAGE
                            );
                }
            }
            else if(op == 2){
                
               pesquisa = JOptionPane.showOptionDialog(
                null,
                        "Pesquisar por titulo, autor ou classificacao? ",
                        "Pesquisa",
                        JOptionPane.YES_NO_CANCEL_OPTION,
                        JOptionPane.WARNING_MESSAGE,
                        null,
                opps,
                opps[0]
                );        
               
               if (pesquisa == JOptionPane.CLOSED_OPTION) {
                    continue;
                }
                
                if(pesquisa == 0){
                    String titulo = JOptionPane.showInputDialog(
                    null,
                            "Digite o titulo para pesquisar: ",
                            "Titulo",
                            JOptionPane.QUESTION_MESSAGE
                    );
                    for(int i=0;i<qtd;i++){
                        if(titulos[i].equalsIgnoreCase(titulo)){
                            String mensagem = String.format("\n---%s---\nAutor: %s \nQuantidade de paginas: %d \nLivro "+ classificar(paginas[i]), titulos[i], autores[i], paginas[i]);
                        JOptionPane.showMessageDialog(
                        null,
                                mensagem,
                                "Pesquisa",
                                JOptionPane.INFORMATION_MESSAGE
                        );
                        }
                    }
                }
                else if(pesquisa == 1){
                    String autor = JOptionPane.showInputDialog(
                    null,
                            "Digite o nome do autor: ",
                            "Pesquisa",
                            JOptionPane.QUESTION_MESSAGE
                    );
                    for(int i=0;i<qtd;i++){
                        if(autor.equalsIgnoreCase(autores[i])){
                            String mensagem = String.format("\n---%s---\nAutor: %s \nQuantidade de paginas: %d \nLivro "+ classificar(paginas[i]), titulos[i], autores[i], paginas[i]);
                            JOptionPane.showMessageDialog(
                            null,
                                    mensagem,
                                    "Pesquisa",
                                    JOptionPane.INFORMATION_MESSAGE
                            );
                        }
                    }
                }
                else if(pesquisa == 2){
                    int o = JOptionPane.showOptionDialog(
                    null,
                            "Escoha a classificação: ",
                            "Classificação",
                            JOptionPane.YES_NO_CANCEL_OPTION,
                            JOptionPane.WARNING_MESSAGE,
                            null,
                            classificacoes,
                            classificacoes[0]
                    );
                    for(int i=0;i<qtd;i++){
                        if(classificacoes[o].equals(classificar(paginas[i]))){
                            String mensagem = String.format("\n---%s---\nAutor: %s \nQuantidade de paginas: %d \nLivro "+ classificar(paginas[i]), titulos[i], autores[i], paginas[i]);
                            JOptionPane.showMessageDialog(
                            null,
                                    mensagem,
                                    "Classificação",
                                    JOptionPane.INFORMATION_MESSAGE
                            );
                        }
                    }
                }
            }
        }
    }
    }
    
