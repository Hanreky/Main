package array;

import java.util.Scanner; // Biblioteca para ler a váriavel

public class Array {
    
    public static boolean invalidOp(int op){
        if(op < 1 || op > 3){
        return true;
    }
        else return false;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N, i, infantil = 0, juvenil = 0, adulto = 0;

        System.out.println("Digite a quantidade de participantes: ");
        N = scanner.nextInt(); 
        scanner.nextLine(); 

        int[] idade = new int[N];
        String[] nomes = new String[N];
        String[] classificacao = new String[N];
        String[] sobrenomes = new String[N];

        for (i = 0; i < N; i++) {
            System.out.println("Digite o nome do participante " + (i + 1) + ": ");
            nomes[i] = scanner.nextLine();
            
            System.out.println("Digite o sobrenome do participante " + (i + 1) + ": ");
            sobrenomes[i] = scanner.nextLine();

            System.out.println("Digite a idade de " + nomes[i] + " "+sobrenomes[i]+": ");
            idade[i] = scanner.nextInt();
            scanner.nextLine();

            while (idade[i] < 0) {
                System.out.println("Idade Inválida. Digite novamente: ");
                idade[i] = scanner.nextInt();
                scanner.nextLine();
            }

            if (idade[i] <= 12) {
                classificacao[i] = "Infantil";
                infantil++;
            } else if (idade[i] > 12 && idade[i] <= 17) {
                classificacao[i] = "Juvenil";
                juvenil++;
            } else if (idade[i] >= 18) {
                classificacao[i] = "Adulto";
                adulto++;
            }
            System.out.println("Classificação: " + classificacao[i]);
        }

        while (true) {
            System.out.println("========================\n Menu de opções: \n  1.Estatísticas; \n  2.Todos participantes; \n  3.Consultar por nome.\n========================");
            int op = scanner.nextInt();
            scanner.nextLine();
 
                if(op == 1) {
                    System.out.println("Total de participantes: " + N);
                    System.out.println("Participantes infantis: " + infantil);
                    System.out.println("Participantes juvenis: " + juvenil);
                    System.out.println("Participantes adultos: " + adulto);
                }
                else if(op == 2) {
                    for (i = 0; i < N; i++) {
                        System.out.println("---" + nomes[i] + " " + sobrenomes[i] + "---\n Idade: " + idade[i] + "\n Classificacao: " + classificacao[i]);
                    }
                }
                else if(op == 3) {
                    System.out.println("Digite o nome do participante: ");
                    String nome = scanner.nextLine();
                    for (i = 0; i < N; i++) {
                        if (nome.equals(nomes[i])) {
                            System.out.println("---" + nomes[i] + " " + sobrenomes[i] + "---\n Idade: " + idade[i] + "\n Classificacao: " + classificacao[i]);
                        }
                    }
                }
                while(invalidOp(op) == true) {
                    System.out.println("Opção Inválida. ");
                }            
        }
    }
}